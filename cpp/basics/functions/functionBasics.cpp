// Demonstrates defining and using basic functions, including parameters and return types.
// // Created by: Jacque Wilson on 10/05/2024 - OhanaCodes

#include <iostream>
using namespace std;

// Function to calculate the sum of two numbers

int sum(int a, int b) {
    return a + b;
}

int main() {
    int x = 5;
    int ty = 3;

    // Function call
    int result = sum(x, ty);
    cout << "The sum of " << x << " and " << ty << " is: " << result << endl;

return 0;
}