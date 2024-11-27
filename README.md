# HMI Dashboard Simulator

This project simulates the behavior of various Human-Machine Interface (HMI) controls using C++ algorithms and object-oriented design patterns. It covers tasks like data manipulation using STL containers, implementing observer patterns, and handling dynamic control updates based on system mode.

## Tasks Overview

1. **Task 1**: Demonstrates basic usage of STL containers (vectors) to store control states, and displays them.
2. **Task 2**: Uses sets and vectors to demonstrate dynamic and static widget management, including searching, merging, and displaying widgets.
3. **Task 3**: Shows how to manipulate control states by filling, generating, and transforming control objects with STL algorithms.
4. **Task 4**: Implements merging of two sorted lists of controls using a custom comparison function and the `merge` algorithm from the STL.
5. **Task 5**: Implements the Observer design pattern to update control visibility based on the mode of the HMI system (e.g., Night Mode).

## Files

- `main.cpp`: The entry point of the program that calls the tasks in sequence.
- `Task1.cpp`: Contains the implementation for Task 1 (control state display).
- `Task2.cpp`: Contains the implementation for Task 2 (widget management).
- `Task3.cpp`: Contains the implementation for Task 3 (control state manipulation).
- `Task4.cpp`: Contains the implementation for Task 4 (merging sorted controls).
- `Task5.cpp`: Contains the implementation for Task 5 (Observer design pattern for mode updates).
- `Task1.h`, `Task2.h`, `Task3.h`, `Task4.h`, `Task5.h`: Header files that define the task function signatures and necessary includes.

## Requirements

- **C++11 or later** for full compatibility with STL algorithms and smart pointers.
- A C++ compiler that supports modern C++ standards (GCC, Clang, or MSVC recommended).

## How to Build and Run

### 1. Clone the Repository

```bash
git clone https://github.com/naveen7780/HMI_Dashboard_Sinulator.git
cd HMI_Dashboard_Sinulator


Example Output
Here’s an example output when running the program:

              Running Task 1...
              ID: 1, Type: button, State: visible
              ID: 2, Type: button, State: invisible
              ID: 3, Type: slider, State: disabled
              ID: 4, Type: button, State: visible
              ID: 5, Type: slider, State: invisible
              ...
              
              Running Task 2...
              Dynamic widget: Speedometer
              Dynamic widget: Tachometer
              ...
              
              Running Task 3...
              All controls set to disabled.
              ...
              
              Running Task 4...
              ID: 1, Type: button, State: invisible
              ID: 2, Type: button, State: visible
              ...
              
              Running Task 5...
              Button visibility adjusted for Night mode.
              Slider visibility adjusted for Night mode.
              



Design Patterns
This project also demonstrates the following design patterns:

Observer Pattern (Task 5): Used to manage the visibility of controls based on mode changes (like switching to Night mode).
Contributing
If you want to contribute to this project, feel free to fork the repository and submit a pull request. Contributions are welcome!

License
This project is open source and available under the MIT License.


Author
Naveen (GitHub: naveen7780)
