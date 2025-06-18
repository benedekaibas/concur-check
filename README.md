# concur-check

## About
This project focuses on static analysis of multithreaded C++ programs, with the goal of detecting race conditions, deadlocks, and atomicity violations at compile time. These types of concurrency bugs are often difficult to detect and reproduce using dynamic methods, making static detection both practical and essential for building reliable multithreaded software.

The project aims to develop a lightweight static analysis tool capable of analyzing C++ code using common concurrency primitives like std::thread, std::mutex, and lock_guard. The tool uses static techniques such as lockset analysis and control flow inspection to identify potential issues in shared memory access patterns.

In addition to its practical goals, this project serves as a learning platform for the founder to underst and implement core concepts in static analysis, including control flow graphs, alias analysis, and inter-thread communication modeling.

## What's multithread about in C++?

Multithreading in C++ allows a program to be divided into smaller, concurrently executable units called threads. These threads operate independently but share the same system resources, such as memory. By leveraging multithreading, developers can significantly enhance program performance through better utilization of multi-core processors.

However, while multithreading can improve execution speed and responsiveness, it also introduces additional complexity and potential for errors. Improper synchronization, race conditions, and other concurrency-related issues can lead to subtle and hard-to-detect bugs, making multithreaded programming more error-prone compared to sequential or single-threaded approaches. Overall, we can say that in a multithreaded environment, multiple threads take up different parts of a program to speed up the execution time. The multiple threads are handled by the CPU.
