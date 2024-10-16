// Itereate over a string using for loop

#include <iostream>
#include <string>
using namespace std;

int main () {
    string text = "Hello, World!";

    // For loop
    for (int i = 0; i < text.length(); i++) {
        cout << text[i] << endl;
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

