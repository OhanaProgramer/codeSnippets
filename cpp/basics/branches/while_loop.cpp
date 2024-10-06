// While loop example
// Created by: Jacque Wilson on 10/05/2024 - OhanaCodes

/* Explanation:

The while loop continues as long as count is less than or equal to 5.
count++ ensures the loop eventually terminates.*/
#include <iostream>
using namespace std;

int main() {
    int count = 1;

    // Loop until count is greater than 5
    while (count <= 5) {
        cout << "Count is: " << count << endl;
        count++;
    }

    return 0;
}

// Output:
/*
Count is: 1
Count is: 2
Count is: 3
Count is: 4
Count is: 5
*/