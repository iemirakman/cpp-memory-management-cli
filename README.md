# Dynamic Memory Management CLI

![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg?style=for-the-badge)

## Overview
A modular Command Line Interface (CLI) application built in C++ to demonstrate core computer science concepts: dynamic memory allocation, strict pointer manipulation, and system-level resource management. 

Rather than relying on high-level abstractions, this tool directly interacts with memory architectures to allocate, manipulate, and safely release resources, ensuring zero memory leaks during execution.

## Core Features
* **Dynamic Memory Allocation:** Allocates array spaces on the heap dynamically at runtime based on user input, directly managing RAM resources.
* **In-place Pointer Reversal:** Reverses data structures strictly via pointer manipulation (without utilizing secondary arrays), optimizing memory footprint and processing speed.
* **Iterative Algorithms:** Implements iterative mathematical computations (factorial) to maintain O(1) space complexity and prevent call-stack overflow compared to naive recursive approaches.
* **Strict Memory Leak Prevention:** Enforces rigorous `delete[]` protocols within the application lifecycle to guarantee system resources are safely returned to the OS before termination.

## Project Architecture
The repository strictly adheres to modular design principles, separating logic from execution:
* `main.cpp`: Manages the application loop, user I/O routing, and final memory cleanup.
* `operations.h`: Declares function signatures, serving as the system's contract.
* `operations.cpp`: Contains the core algorithmic logic and pointer manipulations.

## Build and Execution

### Compilation
To compile the source code into an executable, ensure you have a standard C++ compiler (like `g++` or `clang++`) installed. Run the following command in your terminal:

```bash
g++ main.cpp operations.cpp -o memory_cli
