// Descrpition: Using Templates and Overloading Together
// Created by: Jacque Wilson on 10/05/2024 - OhanaCodes

/* Explanation:
The template function getMax works for all data types (int, double, etc.).
The overloaded version for string provides custom logic to compare strings by 
length rather than lexicographical comparison, which is the default behavior for strings.*/

#include <iostream>
#include <string>
using namespace std;

// Template for getting the maximum value of two generic types
template <typename T> // T is a generic type
T getMax(T a, T b) {  // This takes two arguments of type T
    return (a > b) ? a : b; // Returns the larger of the two values as type T
}

// Overloaded function for comparing two strings (by length)
string getMax(const string& a, const string& b) {
    return (a.length() > b.length()) ? a : b;
}

int main() {
    cout << getMax(10, 20) << endl;        // Calls the template version (int)
    cout << getMax(3.5, 2.1) << endl;      // Calls the template version (double)
    cout << getMax("Hello", "Hi") << endl; // Calls the overloaded version for strings

    return 0;
}

// Output:
// 20
// 3.5
// Hello
