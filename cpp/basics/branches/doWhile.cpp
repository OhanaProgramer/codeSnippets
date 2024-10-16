// Description: A simple do-while loop example.
// Created by: Jacque Wilson on 10/05/2024 - OhanaCodes
/* Explanation:
The 'do-while' loop executes the block of code first and then checks the condition.
Runs at least once even if the condition is false.
The condition is checked at the end of the loop (num <3)
*/

#include <iostream>
using namespace std;

int main() {
    int num = 0;
    do {
        cout << "Number: " << num << endl;
        num++;
    } while (num < 3);
    return 0;
}

// Output:
// Number: 0   
// Number: 1
// Number: 2
// Compare this snippet from cpp/basics/branches/ifElse.cpp: