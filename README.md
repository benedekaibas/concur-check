# concur-check

## About
This project focuses on static analysis of multithreaded C++ programs, with the goal of detecting race conditions, deadlocks, and atomicity violations at compile time. These types of concurrency bugs are often difficult to detect and reproduce using dynamic methods, making static detection both practical and essential for building reliable multithreaded software.

The project aims to develop a lightweight static analysis tool capable of analyzing C++ code using common concurrency primitives like std::thread, std::mutex, and lock_guard. The tool uses static techniques such as lockset analysis and control flow inspection to identify potential issues in shared memory access patterns.

In addition to its practical goals, this project serves as a learning platform for the founder to underst and implement core concepts in static analysis, including control flow graphs, alias analysis, and inter-thread communication modeling.

## What's multithread about in C++?

First of all, we have to understand what is multithreading about in C++. We use multithreading to divide a larger program into smaller executable parts, so called threads. The created threads are independent from each other, but they use the same resources like memory. By using multithreading in our C++ codebase(s) we can improve the performance of our program. This is done by utilizing multiple cores of our CPU
