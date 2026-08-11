# Dynamic Memory Management CLI

[![Türkçe](https://img.shields.io/badge/Dil-T%C3%BCrk%C3%A7e-red.svg?style=for-the-badge)](README-tr.md)
[![English](https://img.shields.io/badge/Language-English-blue.svg?style=for-the-badge)](README.md)

![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg?style=for-the-badge)
![Build Status](https://img.shields.io/github/actions/workflow/status/iemirakman/cpp-memory-management-cli/build.yml?style=for-the-badge)

## Objective & Vision
Rather than hiding behind high-level abstractions, I built this modular C++ CLI application to understand how memory actually works under the hood. 

This project is built to directly practice core computer science concepts: dynamic memory allocation, strict pointer manipulation, and resource management. Instead of relying on modern frameworks doing the heavy lifting, this tool directly interacts with memory architectures to allocate, manipulate, and safely release resources, aiming for zero memory leaks during execution.

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