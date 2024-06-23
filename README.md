# UGV CGPA Calculator

## Table of Contents
- [Overview](#overview)
- [Features](#features)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Usage](#usage)
- [Code Explanation](#code-explanation)
  - [Data Structures](#data-structures)
  - [Functions](#functions)
- [How It Works](#how-it-works)
- [Contributing](#contributing)
- [License](#license)

## Overview
The UGV CGPA Calculator is a command-line program designed to help students at the University of Global Village calculate their CGPA (Cumulative Grade Point Average) for a given semester. The program allows users to select a semester, view the courses and credits, and input their GPA for each course to calculate the CGPA.

## Features
- Supports semesters 1 through 8.
- Displays courses, credits, and titles in a formatted table.
- Calculates CGPA based on user input.
- User-friendly command-line interface.

## Getting Started

### Prerequisites
- A C++ compiler (e.g., g++, clang++)
- Terminal or command prompt access

### Installation
1. Clone the repository:
    ```sh
    git clone https://github.com/ProgrammerJibon/UGV-CGPA-Calculator.git
    cd UGV-CGPA-Calculator
    ```

2. Compile the code:
    ```sh
    g++ main.cpp -o CGPACalculator
    ```

## Usage
1. Run the program:
    ```sh
    ./CGPACalculator
    ```

2. Follow the on-screen instructions to select a semester and input GPAs for each course.

## Code Explanation

### Data Structures
- **Course**: A struct to hold course information including the course code, title, and credit hours.
- **semesters**: A map where each key is a semester number (1-8) and the value is a vector of `Course` structs containing the courses for that semester.

### Functions
- **centerText**: A utility function to center-align text within a given width.
- **printCourses**: Prints the courses for a selected semester in a formatted table.
- **concat_to_char**: Converts a `std::string` to a C-style string (`const char*`).
- **main**: The main function which handles user interaction, GPA input, and CGPA calculation.

## How It Works
1. **Semester Selection**: The program prompts the user to enter a semester number between 1 and 8. It validates the input to ensure it falls within this range.
2. **Display Courses**: Once a valid semester is selected, the program clears the screen and displays the courses for that semester in a formatted table.
3. **GPA Input**: The program then prompts the user to enter their GPA for each course. It validates the GPA to ensure it is within the 0-4 range.
4. **CGPA Calculation**: The program calculates the CGPA by dividing the total grade points by the total credits.
5. **Display CGPA**: The calculated CGPA is displayed to the user.

## Contributing
Contributions are welcome! Please follow these steps:
1. Fork the repository.
2. Create a new branch: `git checkout -b feature/your-feature-name`
3. Commit your changes: `git commit -m 'Add some feature'`
4. Push to the branch: `git push origin feature/your-feature-name`
5. Open a pull request.

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
