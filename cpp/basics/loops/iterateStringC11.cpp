// Range-based loops (C_++11) example
#include <iostream>
#include <string>
using namespace std;

int main () {
    string text = "Hello, World!";

    // Range-based loop
    for (char c : text) {
        cout << c << endl;
    }
return 0;
}

// Output:
// H
// e
// l
// l
// o
// ,
//
// W
// o
// r
// l
// d
// !

