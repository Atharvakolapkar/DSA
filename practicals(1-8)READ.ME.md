💻 Data Structures and Algorithms – Practical Implementations in C++
📌 Project Overview

This repository contains the practical implementations of Data Structures and Algorithms (DSA) using C++. It covers fundamental programming concepts, searching and sorting techniques, linked lists, stacks, queues, operator overloading and expression evaluation.

Each practical demonstrates the implementation and working of different data structures and algorithms through C++ programs.

The main objective is to develop problem-solving skills and understand how different data structures operate in real-world programming applications.

🛠️ Technologies Used
Programming Language: C++
IDE: Visual Studio Code
Compiler: GCC (MinGW)
Version Control: Git and GitHub
📚 List of Practicals
🔹 Practical 1: Operator Overloading

Aim: To implement operator overloading in C++ using a Complex Number class.

Description:

This practical demonstrates operator overloading by performing arithmetic operations on two complex numbers.

A Complex class is created with real and imaginary parts. The arithmetic operators are overloaded to perform operations directly on complex number objects.

Operations Implemented:

Addition (+)
Subtraction (-)
Multiplication (*)

Concepts Used:

Classes and Objects
Constructors
Operator Overloading
Encapsulation
🔹 Practical 2: Searching Algorithms

This practical implements two searching algorithms.

2.1 Linear Search

Aim: To implement Linear Search in C++.

Description:

Linear Search checks each element of an array sequentially until the required element is found or the entire array has been searched.

Working:

Start from the first element.
Compare each element with the target value.
If a match is found, return its index.
If no match is found, return -1.

Time Complexity:

Best Case: O(1)
Average Case: O(n)
Worst Case: O(n)
2.2 Binary Search

Aim: To implement Binary Search in C++.

Description:

Binary Search is an efficient searching algorithm that repeatedly divides a sorted array into two halves to find the target element.

Working:

Set the first and last positions.
Calculate the middle position.
Compare the middle element with the target.
If the target is smaller, search the left half.
If the target is larger, search the right half.
Continue until the element is found or the search range becomes empty.

Time Complexity:

Best Case: O(1)
Average Case: O(log n)
Worst Case: O(log n)

Note: Binary Search requires a sorted array.

🔹 Practical 3: Bubble Sort

Aim: To implement Bubble Sort in C++.

Description:

Bubble Sort is a simple sorting algorithm that repeatedly compares adjacent elements and swaps them if they are in the wrong order.

The process continues until the elements are arranged in ascending order.

Working:

Compare adjacent elements.
Swap them if the first element is greater than the second.
Repeat the process for multiple passes.
Continue until the array is sorted.

Time Complexity:

Best Case: O(n²) for the given implementation.
Average Case: O(n²)
Worst Case: O(n²)

Concepts Used:

Arrays
Nested Loops
Swapping
Sorting Techniques
🔹 Practical 4: Singly Linked List

Aim: To implement a Singly Linked List with insertion, deletion and display operations.

Description:

A Singly Linked List is a linear data structure in which each node contains data and a pointer to the next node.

The last node points to NULL, indicating the end of the list.

Operations Implemented:

Insert a node at the end.
Delete a node by value.
Display all elements of the linked list.

Node Structure:

class Node {
public:
    int data;
    Node* next;
};

Linked List Representation:

HEAD
 |
 v
[5|•] -> [10|•] -> [15|NULL]

Time Complexity:

Operation	Complexity
Insertion at End	O(n)
Deletion by Value	O(n)
Display	O(n)

Concepts Used:

Dynamic Memory Allocation
Pointers
Node Creation
Insertion and Deletion
Linked List Traversal
🔹 Practical 5: Doubly Linked List

Aim: To implement a Doubly Linked List with insertion, deletion and bidirectional traversal.

Description:

A Doubly Linked List is a linear data structure in which each node contains data and two pointers.

prev points to the previous node.
next points to the next node.

It allows traversal in both forward and backward directions.

Operations Implemented:

Insert a node at the end.
Delete a node by value.
Display the linked list in forward direction.
Display the linked list in backward direction.

Node Structure:

class Node {
public:
    int data;
    Node* prev;
    Node* next;
};

Doubly Linked List Representation:

NULL <- [10] <-> [20] <-> [30] -> NULL

Time Complexity:

Operation	Complexity
Insertion at End	O(n)
Deletion by Value	O(n)
Forward Display	O(n)
Backward Display	O(n)

Concepts Used:

Doubly Linked List
Previous and Next Pointers
Dynamic Memory Allocation
Bidirectional Traversal
🔹 Practical 6: Stack Implementation

This practical covers stack implementation using arrays and linked lists.

6.1 Stack Using Array

Aim: To implement a Stack using an Array.

Description:

A Stack is a linear data structure that follows the LIFO (Last In, First Out) principle.

The element inserted last is removed first.

Operations Implemented:

Push – Insert an element.
Pop – Remove the top element.
Peek – Display the top element.
Full – Check whether the stack is full.
Empty – Check whether the stack is empty.
Display – Display stack elements.

Stack Representation:

       TOP
        |
      [92]
      [87]
      [56]
      [34]
      [12]

Time Complexity:

Operation	Complexity
Push	O(1)
Pop	O(1)
Peek	O(1)
Display	O(n)
6.2 Stack Using Linked List

Description:

A Stack can also be implemented using a Linked List, where insertion and deletion take place at the top node.

Note: The current Stack Using Linked List source code in this repository needs to be replaced with an actual linked-list implementation.

🔹 Practical 7: Queue Implementation

This practical covers Queue implementation using arrays and linked lists.

7.1 Queue Using Array

Aim: To implement a Queue using an Array.

Description:

A Queue is a linear data structure that follows the FIFO (First In, First Out) principle.

The element inserted first is removed first.

Operations Implemented:

Enqueue – Insert an element.
Dequeue – Remove an element.
Peek – Display the front element.
Full – Check whether the queue is full.
Empty – Check whether the queue is empty.
Display – Display queue elements.

Queue Representation:

FRONT                     REAR
  |                         |
  v                         v
[25] -> [57] -> [82] -> [99]

Time Complexity:

Operation	Complexity
Enqueue	O(1)
Dequeue	O(1)
Peek	O(1)
Display	O(n)
7.2 Queue Using Linked List

Aim: To implement a Queue using a Linked List.

Description:

A Queue using a Linked List dynamically manages elements using nodes.

Two pointers are maintained:

front points to the first node.
rear points to the last node.

Operations Implemented:

Enqueue
Dequeue
Peek
Empty
Display

Time Complexity:

Operation	Complexity
Enqueue	O(1)
Dequeue	O(1)
Peek	O(1)
Display	O(n)
🔹 Practical 8: Postfix Expression Evaluation

Aim: To implement Postfix Expression Evaluation using a Stack in C++.

Description:

Postfix Expression Evaluation is a method of evaluating arithmetic expressions in which operators are written after their operands.

A Stack is used to store operands and perform arithmetic operations.

Example:

Infix Expression:
5 + 3

Postfix Expression:
53+
 
Result:
8

Working:

Read the postfix expression character by character.
If the character is a digit, push it onto the stack.
If the character is an operator, pop two operands.
Perform the required arithmetic operation.
Push the result back onto the stack.
The final stack element represents the answer.

Operators Supported:

Addition (+)
Subtraction (-)
Multiplication (*)
Division (/)
Modulus (%)
Exponentiation ($)

Time Complexity: O(n)

Concepts Used:

Stack
Expression Evaluation
Character Handling
Arithmetic Operations
LIFO Principle
