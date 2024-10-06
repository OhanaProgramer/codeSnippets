// Demonstrates adding characters to a string
// Created by: Jacque Wilson on 10/05/2024 - OhanaCodes
/*
Explanation:
This program demonstrates how to add characters to the end of a string using the append method.
The append() method allows us to add more content to an existing string.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string message = "Hello, ";
    string name = "Jacque";

    // Append the name to the message
    message.append(name);

    cout << message << endl;

    return 0;
}

// Output:
// Hello, Jacque