#include <iostream>
#include <iomanip>
#include <map>
#include <vector>
#include <string>

using namespace std;

struct Course {
    string code;
    string title;
    int credit;
};

string centerText(const string& text, int width) {
    int padding = width - text.length();
    int paddingLeft = padding / 2;
    int paddingRight = padding - paddingLeft;
    return string(paddingLeft, ' ') + text + string(paddingRight, ' ');
}

string centerText(int number, int width) {
    string text = to_string(number);
    return centerText(text, width);
}

void printCourses(const vector<Course>& courses) {
    cout << "\t+------------+------------+--------------------------------------------------+" << endl;
    cout << "\t|    Code    |   Credit   |                      Subject                     |" << endl;
    cout << "\t+------------+------------+--------------------------------------------------+" << endl;
    for (const auto& course : courses) {
        cout << "\t| " << setw(10) << left << course.code << " | "
             << setw(10) << centerText(course.credit, 10) << " | "
             << setw(48) << centerText(course.title, 48) << " |" << endl;
    }
    cout << "\t+------------+------------+--------------------------------------------------+" << endl;
}

const char* concat_to_char(string str){
    return str.data();
}


int main() {
    system("Title UGV CGPA Calculator");
    map<int, vector<Course>> semesters;

    // 1st Semester
    semesters[1] = {
        {"CSE-101", "Introduction to Computer & Programming", 3},
        {"CSE-102", "Introduction to Computer Lab", 1},
        {"CSES-101", "CBET&A (Level-1)", 1},
        {"BDS-907", "Bangladesh Studies", 2},
        {"PHYS-1015", "Physics-I Lab", 1},
        {"PHYS-1014", "Physics-I", 3},
        {"ENG-1-902", "Basic English", 3},
        {"MATH-1-1011", "Mathematics-1", 3},
        {"CSE-106", "Electrical Circuits Lab", 1},
        {"CSE-105", "Electrical Circuits", 3},
        {"CSE-104", "Structured Programming Lab", 1},
        {"CSE-103", "Structured Programming", 2}
    };

    // 2nd Semester
    semesters[2] = {
        {"ENG-II-903", "Advanced English", 3},
        {"CSE-201", "Computer Organization & Architecture", 3},
        {"CSES-102", "CBET&A (Level-2)", 1},
        {"STS-907", "Applied Statistics", 3},
        {"MATH-II-1012", "Mathematics-II", 3},
        {"CSE-112", "Data Structure Lab", 1},
        {"CSE-108", "Principles of Electronics Lab", 1},
        {"CSE-109", "Digital Electronics", 3},
        {"CSE-110", "Digital Electronics Lab", 1},
        {"CSE-111", "Data Structure", 3}
    };

    // 3rd Semester
    semesters[3] = {
        {"CSE-201", "Computer Organization & Architecture", 3},
        {"CSE-202", "Database Management System", 3},
        {"CSE-203", "Database Management System Lab", 1},
        {"CSE-204", "Introduction to Operating System", 3},
        {"CSE-205", "Introduction to Operating System Lab", 1},
        {"CSE-206", "Discrete Mathematics", 3},
        {"CSE-207", "Algorithm Design", 3},
        {"CSE-208", "Algorithm Design Lab", 1},
        {"MATH-III-1013", "Mathematics-III", 3},
        {"CSES-103", "CBET&A (Level-3)", 1}
    };

    // 4th Semester
    semesters[4] = {
        {"CSE-215", "System Analysis & Design", 3},
        {"CSE-211", "Microprocessor & Assembly Language", 3},
        {"CSE-209", "Object Oriented Programming", 3},
        {"CSE-213", "Theory of Computing", 3},
        {"CSE-214", "Communication Engineering", 2},
        {"ACN-1008", "Principles of Accounting", 3},
        {"CSE-216", "System Analysis & Design Lab", 1},
        {"CSE-210", "Object Oriented Programming Lab", 1},
        {"CSE-212", "Microprocessor & Assembly Language Lab", 1},
        {"CSES-104", "CBET&A (PBL Level-4)", 1}
    };

    // 5th Semester
    semesters[5] = {
        {"CSE-306", "Software Engineering", 3},
        {"CSES-105", "CBET&A (Level-5)", 1},
        {"CSE-310", "Digital Signal Processing Lab", 1},
        {"CSE-309", "Digital Signal Processing", 3},
        {"CSE-308", "Computer Graphics Lab", 1},
        {"CSE-307", "Computer Graphics", 2},
        {"CSE-305", "Object Oriented Analysis & Design Lab", 1},
        {"CSE-304", "Object Oriented Analysis & Design", 3},
        {"CSE-303", "Data & Telecommunication", 3},
        {"CSE-302", "Compiler Design Lab", 1},
        {"CSE-301", "Compiler Design", 2}
    };

    // 6th Semester
    semesters[6] = {
        {"CSE-317", "Multimedia Application", 2},
        {"CSE-3205", "Machine Learning", 3},
        {"CSES-106", "CBET&A (Level-6)", 1},
        {"CSE-318", "Multimedia Application Lab", 1},
        {"CSE-316", "Management Information System", 3},
        {"CSE-314", "Computer Peripherals & Interfacing", 3},
        {"CSE-313", "Parallel & Distributed Processing", 3},
        {"CSE-312", "Computer Network & Security Lab", 1},
        {"CSE-315", "Computer Peripherals & Interfacing Lab", 1},
        {"CSE-311", "Computer Network & Security", 3}
    };

    // 7th Semester
    semesters[7] = {
        {"CSE-504", "Simulation & Modelling", 3},
        {"CSES-107", "CBET&A (Level-7)", 1},
        {"CSE-412", "VLSI Design Lab", 1},
        {"CSE-411", "VLSI Design", 3},
        {"CSE-407", "Advance Computer Architecture", 3},
        {"CSE-406", "Artificial Intelligence Lab", 1},
        {"CSE-405", "Artificial Intelligence", 3},
        {"CSE-404", "Internet Working & Web Design Lab", 1},
        {"CSE-403", "Internet Working & Web Design", 2},
        {"CSE-402", "RDBMS Programming Lab", 1},
        {"CSE-401", "RDBMS Programming", 2}
    };

    // 8th Semester
    semesters[8] = {
        {"CSE-409", "Pattern Recognition", 3},
        {"CSE-410", "Pattern Recognition Lab", 1},
        {"CSE-408", "Research & Project", 3},
        {"CSE-413", "Internship", 2},
        {"CSES-108", "CBET&A (Level-8)", 1},
        {"CSE-506", "Unix Programming", 3},
        {"CSE-508", "Fault Tolerant System", 3}
    };

    // Validate the semester input
    int semester;
    do {
        cout << "Enter the semester (1-8): ";
        cin >> semester;
    } while (semester < 1 || semester > 8);

    // Get the courses for the chosen semester
    vector<Course> courses = semesters[semester];

    system(concat_to_char("Title UGV CGPA Calculator - Semester "+to_string(semester)));
    system("cls");

    // Print the courses
    printCourses(courses);

    // Input GPA and calculate CGPA
    double totalCredits = 0;
    double totalGradePoints = 0;

    cout << "\n\nEnter GPA: \n\n";
    for (const auto& course : courses) {
        double gpa;
        cout << endl << course.title << " (" << course.code << "): ";
        cin >> gpa;
        if(gpa >= 0 && gpa <= 4){
            totalGradePoints += gpa * course.credit;
            totalCredits += course.credit;
        }
    }

    double cgpa = totalGradePoints / totalCredits;
    cout << "\nYour CGPA for semester " << semester << " is: " << cgpa << endl << endl << endl;

    system("pause");
    system("cls");
    return main();
}
