// Demonstrates iterating through a string using a for loop
// Created by: Jacque Wilson on 10/05/2024 - OhanaCodes
/*
Explanation:
This program demonstrates how to iterate over each character in a string using a for loop.
The loop iterates over the length of the string, printing each character individually.
This is useful for situations where you need to process each character separately.
*/

#include <iostream>
#include <string>
using namespace std;

int main () {
    string FstName = "Ohana";
    string LstName = "Codes";

    // Index-Based Iteration: This traditional for loop uses an integer index i to access each character in the string.
    for (int i = 0; i < FstName.length(); i++) {
        cout << FstName[i] << endl;
    }

    // Range-Based For Loop: This version of the for loop uses C++11's range-based syntax.
    for (char c : LstName) {
         cout << "Character: " << c << endl;
    }

    return 0;
}

// Output:
/*
O
h
a
n
a
Character: C
Character: o
Character: d
Character: e
Character: s
*/