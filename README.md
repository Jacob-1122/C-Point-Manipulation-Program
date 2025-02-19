# Quadrant Analysis and Point Manipulation Program

## 📌 Overview

This is a C++ program that reads 2D points from a file, analyzes their quadrant positions, and performs transformations. The project applies object-oriented programming principles and spatial data processing techniques.

## 📂 File Structure

- **Point.h** → Header file defining the `Point` class.
- **Point.cpp** → Implementation of the `Point` class.
- **main.cpp** → Main driver program handling file input, quadrant analysis, and transformations.
- **points.txt** → Sample data containing (x, y) coordinates.
- **README.md** → This documentation.
- **compile_run.sh** → Bash script to compile and run the program.

## 🛠️ Requirements
Before running this program, ensure you have the following installed on your system:

- **g++ (GCC Compiler)**
  - Install on **Ubuntu/Debian**:
    ```sh
    sudo apt update && sudo apt install g++ -y
    ```
  - Install on **MacOS (via Homebrew)**:
    ```sh
    brew install gcc
    ```
  - Install on **Windows**:
    - Download and install [MinGW-w64](https://www.mingw-w64.org/)
    - Add `g++` to your system PATH

## 🛠️ How to Clone, Compile, and Run

1. **Clone the repository**:
   ```sh
   git clone <repository-url>
   cd <repository-name>
   ```

2. **Run the Bash Script**:
   ```sh
   chmod +x compile_run.sh
   ./compile_run.sh
   ```

## 📥 Input Format (points.txt)

The `points.txt` file should contain space-separated x and y coordinates. Example:
```
2  -3
4   5
-1   4
-2   3
4  -1
```

## 🔥 Features

✔ Reads points from a file  
✔ Determines which quadrant each point belongs to  
✔ Displays the total count of points in each quadrant  
✔ Allows user to compare quadrant alignment of two selected points  
✔ Computes and displays mirrored points over the X and Y axes  

## 📜 License

This project is open-source. Feel free to modify and improve it!
