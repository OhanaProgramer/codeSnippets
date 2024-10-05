// Demonstrates how to use switch statements to handle different conditions. Grades are used as an example.
// Created by: Jacque Wilson on 10/05/2024 - OhanaCodes

#include <iostream>
using namespace std;

int main() {
    char grade = 'A';

    switch (grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Good job!" << endl;
            break;
        case 'C':
            cout << "Well done!" << endl;
            break;
        case 'D':
            cout << "You passed!" << endl;
            break;
        case 'F':
            cout << "Better luck next time!" << endl;
            break;
        default:
            cout << "Invalid grade!" << endl;
    }
    return 0;
}

// Output:
// Excellent!