// Demonstrates how to use switch statements to handle different conditions. Grades are used as an example.
// Created by: Jacque Wilson on 10/05/2024 - OhanaCodes

/* Explanation:

The switch statement handles multiple possible values of grade.
break is used to prevent executing the next case. */

#include <iostream>
using namespace std;

int main() {
    char grade = 'B';

    // Determine performance based on grade
    switch (grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break; // Stops execution to avoid fall-through
        case 'B':
            cout << "Good job!" << endl;
            break;
        case 'C':
            cout << "Average." << endl;
            break;
        default:
            cout << "Needs improvement." << endl;
    }

    return 0;
}

// Output:
// Excellent!