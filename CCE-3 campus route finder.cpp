/*
 * CCE III - Course Project (Unit V: Trees and Graphs)
 * Project : Campus Route Finder
 * Problem : Find routes between places on a campus.
 * Structure: Undirected weighted graph stored as an ADJACENCY LIST.
 * Algorithms: BFS (fewest hops), DFS (reachable places),
 *             Dijkstra (shortest distance + path).
 */

#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
using namespace std;

class CampusGraph {
private:
    vector<string> names;                       // node id -> place name
    vector<vector<pair<int, int>>> adj;         // adj[u] = list of (v, distance)

    // Convert place name to its id (case-insensitive). Returns -1 if absent.
    int getId(const string &name) const {
        string n = toLower(name);
        for (size_t i = 0; i < names.size(); i++)
            if (toLower(names[i]) == n) return (int)i;
        return -1;
    }

    static string toLower(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        return s;
    }

    void dfsUtil(int u, vector<bool> &visited) const {
        visited[u] = true;
        cout << names[u] << " ";
        for (auto &edge : adj[u])
            if (!visited[edge.first]) dfsUtil(edge.first, visited);
    }

public:
    // Add a new place (node)
    void addLocation(const string &name) {
        if (getId(name) != -1) {
            cout << "Location already exists.\n";
            return;
        }
        names.push_back(name);
        adj.push_back({});
    }

    // Add a two-way path (edge) with distance in metres
    void addPath(const string &a, const string &b, int dist) {
        int u = getId(a), v = getId(b);
        if (u == -1 || v == -1) {
            cout << "Error: one or both locations not found.\n";
            return;
        }
        if (dist <= 0) {
            cout << "Error: distance must be positive.\n";
            return;
        }
        adj[u].push_back({v, dist});
        adj[v].push_back({u, dist});
    }

    // Show the adjacency list
    void display() const {
        cout << "\n--- Campus Map (Adjacency List) ---\n";
        for (size_t i = 0; i < names.size(); i++) {
            cout << names[i] << " -> ";
            for (auto &e : adj[i])
                cout << names[e.first] << "(" << e.second << "m)  ";
            cout << "\n";
        }
    }

    // BFS: visits places level by level (fewest hops first)
    void bfs(const string &start) const {
        int s = getId(start);
        if (s == -1) { cout << "Location not found.\n"; return; }

        vector<bool> visited(names.size(), false);
        queue<int> q;
        visited[s] = true;
        q.push(s);

        cout << "BFS from " << names[s] << ": ";
        while (!q.empty()) {
            int u = q.front(); q.pop();
            cout << names[u] << " ";
            for (auto &e : adj[u]) {
                if (!visited[e.first]) {
                    visited[e.first] = true;
                    q.push(e.first);
                }
            }
        }
        cout << "\n";
    }

    // DFS: goes as deep as possible before backtracking
    void dfs(const string &start) const {
        int s = getId(start);
        if (s == -1) { cout << "Location not found.\n"; return; }

        vector<bool> visited(names.size(), false);
        cout << "DFS from " << names[s] << ": ";
        dfsUtil(s, visited);
        cout << "\n";
    }

    // Dijkstra: shortest distance and the actual path
    void shortestPath(const string &from, const string &to) const {
        int s = getId(from), t = getId(to);
        if (s == -1 || t == -1) { cout << "Location not found.\n"; return; }

        int n = names.size();
        vector<int> dist(n, INT_MAX), parent(n, -1);
        // min-heap of (distance, node)
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        dist[s] = 0;
        pq.push({0, s});

        while (!pq.empty()) {
            int d = pq.top().first;
            int u = pq.top().second;
            pq.pop();
            if (d > dist[u]) continue;           // outdated entry
            for (auto &e : adj[u]) {
                int v = e.first, w = e.second;
                if (dist[u] + w < dist[v]) {
                    dist[v] = dist[u] + w;
                    parent[v] = u;
                    pq.push({dist[v], v});
                }
            }
        }

        if (dist[t] == INT_MAX) {
            cout << "No route exists between " << names[s] << " and " << names[t] << ".\n";
            return;
        }

        // Rebuild path from target back to source
        vector<int> path;
        for (int v = t; v != -1; v = parent[v]) path.push_back(v);
        reverse(path.begin(), path.end());

        cout << "Shortest route: ";
        for (size_t i = 0; i < path.size(); i++) {
            cout << names[path[i]];
            if (i + 1 < path.size()) cout << " -> ";
        }
        cout << "\nTotal distance: " << dist[t] << " m\n";
    }
};

// Preload a sample campus map (so testing is quick)
void loadSampleMap(CampusGraph &g) {
    string places[] = {"MainGate", "Library", "Canteen", "Hostel", "Lab", "Auditorium", "Ground"};
    for (auto &p : places) g.addLocation(p);

    g.addPath("MainGate", "Library", 200);
    g.addPath("MainGate", "Canteen", 350);
    g.addPath("Library", "Lab", 150);
    g.addPath("Library", "Auditorium", 300);
    g.addPath("Canteen", "Hostel", 250);
    g.addPath("Lab", "Hostel", 400);
    g.addPath("Auditorium", "Hostel", 100);

    // "Ground" is intentionally left disconnected to test the "no route" case
}

int main() {
    CampusGraph g;
    loadSampleMap(g);

    int choice;
    string a, b;
    int d;

    do {
        cout << "\n===== CAMPUS ROUTE FINDER =====\n"
             << "1. Display campus map\n"
             << "2. Add location\n"
             << "3. Add path\n"
             << "4. BFS traversal\n"
             << "5. DFS traversal\n"
             << "6. Shortest route (Dijkstra)\n"
             << "0. Exit\n"
             << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: g.display(); break;
            case 2:
                cout << "Location name (no spaces): ";
                cin >> a;
                g.addLocation(a);
                break;
            case 3:
                cout << "From: "; cin >> a;
                cout << "To: "; cin >> b;
                cout << "Distance (m): "; cin >> d;
                g.addPath(a, b, d);
                break;
            case 4:
                cout << "Start location: "; cin >> a;
                g.bfs(a);
                break;
            case 5:
                cout << "Start location: "; cin >> a;
                g.dfs(a);
                break;
            case 6:
                cout << "From: "; cin >> a;
                cout << "To: "; cin >> b;
                g.shortestPath(a, b);
                break;
            case 0: cout << "Goodbye!\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 0);

    return 0;
}
