# CSE221-assignment-3
CSE221: Data Structures | Fall 2024 | Doubly Linked List, Stack, and Deque

A C++ implementation of three fundamental data structures: a doubly linked list, an array-based stack, and a deque built on top of the doubly linked list. The project also includes custom exception handling and deque reversal using the stack implementation.

## Features

* Doubly linked list with header and trailer sentinel nodes
* Array-based stack implementation
* Deque implementation based on a doubly linked list
* Deque reversal using a stack
* Dynamic memory management
* Custom exception handling
* Overflow and empty-container detection

## Repository Structure

```text
.
├── Makefile                   # Build configuration
├── PA3 description_v1.1.pdf   # Assignment specification
├── README.md                  # Repository documentation
├── doubly_linked_list.cpp     # Doubly linked list implementation
├── stack.cpp                  # Stack implementation
└── deque.cpp                  # Deque implementation
```

## Implemented Data Structures

### Doubly Linked List

The doubly linked list uses header and trailer sentinel nodes and supports:

* `size()`
* `empty()`
* `front()`
* `back()`
* `add_front()`
* `add_back()`
* `remove_front()`
* `remove_back()`

### Stack

Array-based stack following the LIFO principle.

Supported operations:

* `size()`
* `empty()`
* `top()`
* `push()`
* `pop()`

### Deque

Implemented using the doubly linked list.

Supported operations:

* `size()`
* `empty()`
* `push_front()`
* `push_back()`
* `pop_front()`
* `pop_back()`
* `front()`
* `back()`

### Deque Reverse

The `reverse()` operation reverses the deque using the stack implementation.

## Exception Handling

Custom exceptions are used for error handling:

### ContainerEmpty

Thrown when attempting to:

* Access the front or back of an empty container
* Remove an element from an empty list, stack, or deque

### ContainerOverflow

Thrown when attempting to push an element onto a full stack.

## Memory Management

The implementation includes:

* Constructors and destructors
* Dynamic memory allocation and deallocation
* Proper cleanup of allocated nodes and arrays

## Building

Compile the project with:

```bash
make
```

This generates:

```text
main
```

## Main Source Files

### doubly_linked_list.cpp

Implements:

* Node insertion and removal
* Sentinel node management
* List traversal operations

### stack.cpp

Implements:

* Array-based stack operations
* Overflow checking
* LIFO behavior

### deque.cpp

Implements:

* Deque operations
* Integration with the doubly linked list
* Deque reversal using the stack

## Course Information

**Course:** CSE221 Data Structures
**Semester:** Fall 2024

