# 🎵 Music Playlist Manager using Doubly Linked List

## 📌 Project Overview

The Music Playlist Manager is a menu-driven C++ application developed using the **Doubly Linked List** data structure. It allows users to manage a collection of songs by adding, deleting, displaying, and navigating through songs in both forward and backward directions.

Each song contains its title, artist name, and two pointers (`prev` and `next`) that connect it to the previous and next songs.

The project demonstrates the practical implementation of dynamic memory allocation, pointer manipulation, insertion, deletion, traversal, and bidirectional navigation.

## 🎯 Objectives

* To understand the working of a Doubly Linked List.
* To implement insertion and deletion of nodes.
* To perform forward and backward traversal.
* To implement Next and Previous song navigation.
* To manage the currently selected song using a pointer.
* To understand dynamic memory allocation and pointer operations in C++.

## 🛠️ Technologies Used

* **Programming Language:** C++
* **Data Structure:** Doubly Linked List
* **IDE:** Visual Studio Code
* **Compiler:** GCC (MinGW)
* **Version Control:** Git and GitHub

## ⚙️ Features

The application provides the following functionalities:

| No. | Feature                | Description                                                    |
| --- | ---------------------- | -------------------------------------------------------------- |
| 1   | Add Song               | Adds a new song at the end of the playlist.                    |
| 2   | Delete Song            | Deletes a song using its title.                                |
| 3   | Forward Display        | Displays all songs from first to last.                         |
| 4   | Reverse Display        | Displays songs from last to first.                             |
| 5   | Play Current Song      | Displays the currently selected song.                          |
| 6   | Play Next Song         | Moves to the next song.                                        |
| 7   | Play Previous Song     | Moves to the previous song.                                    |
| 8   | Play Complete Playlist | Displays all songs sequentially.                               |
| 9   | Repeat All             | Repeats the complete playlist for a specified number of times. |
| 10  | Show Current Song      | Displays the currently selected song.                          |
| 11  | Exit                   | Terminates the application.                                    |

## 🧠 Data Structure Implementation

The project uses a Doubly Linked List in which each node represents a song.

### Node Structure

Each song node contains:

* `title` – Stores the song title.
* `artist` – Stores the artist name.
* `prev` – Points to the previous song.
* `next` – Points to the next song.

### Pointer Description

| Pointer   | Purpose                                                   |
| --------- | --------------------------------------------------------- |
| `head`    | Points to the first song in the playlist.                 |
| `current` | Points to the currently selected song.                    |
| `p`       | Points to a newly created node or the node to be deleted. |
| `q`       | Used for traversing the linked list.                      |
| `prev`    | Points to the previous node.                              |
| `next`    | Points to the next node.                                  |

### Doubly Linked List Representation

```text
        head
          |
          v
NULL <-> Song 1 <-> Song 2 <-> Song 3 <-> NULL
                    ^
                    |
                  current
```

**Next Navigation:**

```cpp
current = current->next;
```

**Previous Navigation:**

```cpp
current = current->prev;
```

## 📂 Project Structure

```text
Music-Playlist-Manager/
│
├── Music_Playlist.cpp
│
└── README.md
```

## ▶️ How to Run the Project

### Step 1: Clone the Repository

```bash
git clone <your-repository-link>
```

### Step 2: Open the Project

Open the downloaded folder in Visual Studio Code.

### Step 3: Compile the Program

Open the terminal and execute:

```bash
g++ Music_Playlist.cpp -o MusicPlaylist
```

### Step 4: Run the Program

For Windows:

```bash
.\MusicPlaylist.exe
```

## 🧪 Testing

The application can be tested using the following scenarios:

* Adding a single song.
* Adding multiple songs.
* Deleting the first song.
* Deleting a middle song.
* Deleting the last song.
* Deleting a song that does not exist.
* Playing the next and previous songs.
* Attempting navigation beyond playlist boundaries.
* Displaying songs in forward and reverse order.
* Repeating the complete playlist.
* Handling an empty playlist.

## ⏱️ Time Complexity

| Operation              | Time Complexity |
| ---------------------- | --------------- |
| Add Song               | O(n)            |
| Delete Song            | O(n)            |
| Forward Display        | O(n)            |
| Reverse Display        | O(n)            |
| Play Next Song         | O(1)            |
| Play Previous Song     | O(1)            |
| Play Current Song      | O(1)            |
| Play Complete Playlist | O(n)            |
| Repeat All             | O(r × n)        |

Where:

* `n` = Number of songs.
* `r` = Number of repetitions.

## 📚 Learning Outcomes

Through this project, we gained practical knowledge of:

* Doubly Linked List implementation in C++.
* Dynamic memory allocation using `new` and `delete`.
* Pointer manipulation and node connections.
* Insertion and deletion operations.
* Forward and backward traversal.
* Managing the current node using pointers.
* Implementing a real-world application using data structures.

## 👨‍💻 Author

**Atharva Chandrashekhar Kolapkar**

Second-Year B.Tech
Electronics and Computer Engineering
Amrutvahini College of Engineering, Sangamner.

## 📄 Academic Information

* **Subject:** Data Structures and Algorithms
* **Case Study:** Music Playlist Manager
* **Academic Year:** 2026–2027
* **Semester:** III
* **Programming Language:** C++

---

⭐ If you find this project useful, feel free to explore the source code and understand the implementation of Doubly Linked Lists.
