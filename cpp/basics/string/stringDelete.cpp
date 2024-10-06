// Demonstrates deleting characters from a string
// Created by: Jacque Wilson on 10/05/2024 - OhanaCodes
/*
Explanation:
This program demonstrates how to delete a portion of a string using the erase method.
The erase() method removes a portion of the string based on the specified starting index and length.
*/

#include <iostream>
#include <string>
using namespace std;

int main () {
    string message = "Hello, Jacque!";

    // Erase the name from the message
    message.erase(7, 7);

    cout << message << endl;

    return 0;
}

// Output:
// Hello!
