// Demonstrates finding and replacing a substring in a string
// Created by: Jacque Wilson on 10/05/2024 - OhanaCodes
/*
Explanation:
This program demonstrates how to find and replace a substring within a string.
The find() function is used to locate the substring, and the replace() method is used to replace it.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Original string
    string message = "Hello, Jacque!";

    // Find the position of the substring
    size_t pos = message.find("Jacque");

    // Replace the substring with a new value
    if (pos != string::npos) {
        message.replace(pos, 6, "George");
    }

    cout << message << endl;

    return 0;
}

// Output:
// Hello, George!