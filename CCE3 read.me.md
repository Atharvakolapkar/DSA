# 🗺️ Campus Route Finder Using Graphs in C++

## 📌 Project Overview

Campus Route Finder is a menu-driven C++ application designed to find routes between different locations within a college campus.

The project uses an **Undirected Weighted Graph implemented using an Adjacency List** to represent campus locations and the paths connecting them. Each location represents a vertex (node), while the paths between locations represent edges with distances measured in metres.

The application implements three important graph algorithms: **Breadth-First Search (BFS), Depth-First Search (DFS), and Dijkstra's Shortest Path Algorithm** to explore campus locations and calculate the shortest distance between two places.

## 🎯 Objectives

* To understand the implementation of Graph data structures in C++.
* To represent campus locations using an Adjacency List.
* To implement BFS and DFS graph traversal algorithms.
* To find the shortest distance between two campus locations using Dijkstra's algorithm.
* To understand weighted and undirected graphs.
* To apply graph algorithms to solve a real-world navigation problem.

## 🛠️ Technologies Used

| Technology           | Description               |
| -------------------- | ------------------------- |
| Programming Language | C++                       |
| Data Structure       | Undirected Weighted Graph |
| Graph Representation | Adjacency List            |
| Algorithms           | BFS, DFS, Dijkstra        |
| IDE                  | Visual Studio Code        |
| Compiler             | GCC (MinGW)               |
| Version Control      | Git and GitHub            |

## ⚙️ Features

The application provides the following functionalities:

| No. | Feature            | Description                                                                         |
| --- | ------------------ | ----------------------------------------------------------------------------------- |
| 1   | Display Campus Map | Displays all locations and their connected paths with distances.                    |
| 2   | Add Location       | Adds a new location to the campus map.                                              |
| 3   | Add Path           | Creates a two-way connection between two locations with a specified distance.       |
| 4   | BFS Traversal      | Visits connected locations level by level.                                          |
| 5   | DFS Traversal      | Explores connected locations deeply before backtracking.                            |
| 6   | Shortest Route     | Finds the shortest-distance route between two locations using Dijkstra's algorithm. |
| 7   | Exit               | Terminates the application.                                                         |

## 🧠 Data Structures Used

### 1. Graph

A graph is a non-linear data structure consisting of vertices and edges.

In this project:

* **Vertices:** Represent campus locations.
* **Edges:** Represent paths between locations.
* **Weights:** Represent the distance between two locations in metres.

### 2. Adjacency List

The campus map is represented using an Adjacency List.

Each vertex maintains a list of its connected locations along with their respective distances.

### Graph Representation

```text
             MainGate
             /      \
         200m        350m
           /          \
       Library       Canteen
       /     \           \
   150m     300m         250m
    /         \             \
  Lab       Auditorium ---- Hostel
                  100m
```

*Ground is intentionally kept disconnected to demonstrate the no-route condition.*

### Graph Implementation

```cpp
vector<string> names;
vector<vector<pair<int, int>>> adj;
```

* `names` stores the names of campus locations.
* `adj` stores connected vertices and their distances.

## 🔍 Algorithms Used

### 1. Breadth-First Search (BFS)

BFS is a graph traversal algorithm that explores vertices level by level.

**Working:**

* Starts from the selected location.
* Uses a queue to maintain the visiting order.
* Visits all connected neighbouring locations.
* Continues until all reachable locations are visited.

**Time Complexity:** O(V + E)

### 2. Depth-First Search (DFS)

DFS is a graph traversal algorithm that explores as far as possible along one path before backtracking.

**Working:**

* Starts from the selected location.
* Marks the current location as visited.
* Recursively visits unvisited neighbouring locations.
* Backtracks when no unvisited neighbour remains.

**Time Complexity:** O(V + E)

### 3. Dijkstra's Shortest Path Algorithm

Dijkstra's algorithm finds the minimum-distance path between a source location and a destination location in a weighted graph with non-negative edge weights.

**Working:**

* Assigns an initial distance of zero to the source.
* Assigns infinity to all other locations.
* Uses a priority queue to select the location with the minimum tentative distance.
* Updates distances when a shorter path is discovered.
* Uses a parent array to reconstruct the shortest route.

**Time Complexity:** O((V + E) log V) with a priority queue and adjacency list.

## 📍 Sample Campus Locations

The application initially loads the following seven locations:

1. MainGate
2. Library
3. Canteen
4. Hostel
5. Lab
6. Auditorium
7. Ground

### Sample Path Connections

| From       | To         | Distance |
| ---------- | ---------- | -------: |
| MainGate   | Library    |    200 m |
| MainGate   | Canteen    |    350 m |
| Library    | Lab        |    150 m |
| Library    | Auditorium |    300 m |
| Canteen    | Hostel     |    250 m |
| Lab        | Hostel     |    400 m |
| Auditorium | Hostel     |    100 m |

## 📂 Project Structure

```text
Campus-Route-Finder/
│
├── Campus_Route_Finder.cpp
│
└── README.md
```

## ▶️ How to Run the Project

### Step 1: Clone the Repository

```bash
git clone <your-repository-link>
```

### Step 2: Open the Project

Open the downloaded project folder in Visual Studio Code.

### Step 3: Compile the Program

Open the terminal and execute:

```bash
g++ Campus_Route_Finder.cpp -o CampusRouteFinder
```

### Step 4: Run the Program

For Windows:

```bash
.\CampusRouteFinder.exe
```

## 🧪 Testing

The application can be tested using the following scenarios:

* Displaying the complete campus map.
* Adding a new campus location.
* Adding a path between two existing locations.
* Attempting to add an already existing location.
* Entering an invalid location.
* Testing BFS traversal.
* Testing DFS traversal.
* Finding the shortest route between two locations.
* Testing locations with no available route.
* Testing invalid or zero-distance paths.
* Exiting the application properly.

## ⏱️ Time Complexity Analysis

Let:

* V = Number of vertices (locations).
* E = Number of edges (paths).

| Operation            | Time Complexity  |
| -------------------- | ---------------- |
| Add Location         | O(V)             |
| Add Path             | O(V)             |
| Display Graph        | O(V + E)         |
| BFS Traversal        | O(V + E)         |
| DFS Traversal        | O(V + E)         |
| Dijkstra's Algorithm | O((V + E) log V) |

*Note: The complexity of Add Location and Add Path includes searching for location IDs using the getId() function.*

## 📚 Learning Outcomes

Through this project, we gained practical knowledge of:

* Graph implementation using an Adjacency List.
* Understanding vertices, edges, and weighted graphs.
* Implementing BFS and DFS traversal algorithms.
* Finding shortest paths using Dijkstra's algorithm.
* Working with queues and priority queues.
* Understanding graph connectivity.
* Applying object-oriented programming concepts in C++.
* Solving real-world navigation problems using graph algorithms.

## 🚀 Future Scope

* Implement a graphical user interface (GUI).
* Add more campus buildings and locations.
* Display alternative routes between locations.
* Add an interactive campus map.
* Include estimated travel time.
* Implement route selection based on user preferences.

## 👨‍💻 Author

**Atharva Chandrashekhar Kolapkar**

Second-Year B.Tech
Electronics and Computer Engineering
Amrutvahini College of Engineering, Sangamner.

## 📄 Academic Information

* **Subject:** Data Structures and Algorithms
* **Course Project:** Campus Route Finder
* **Unit:** Unit V – Trees and Graphs
* **Academic Year:** 2026–2027
* **Semester:** III
* **Programming Language:** C++

---

⭐ If you find this project useful, explore the source code to understand the practical implementation of Graphs and their algorithms in C++.
