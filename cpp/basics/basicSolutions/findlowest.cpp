/* Write a program whose input is a list of some number of positive,
 non-zero integers, and that outputs the smallest integer. A 0 ends 
 the list and is not considered for the output. If the input is 6 99 3 5 0, 
 the output is 3. You can assume at least one positive integer is input. */

#include <iostream>
using namespace std;

int main() {
    int userInput;
    int lowest;

    cin >> userInput;
    lowest = userInput;

    // Loop continues until user inputs 0
    while (true) {
        cin >> userInput;

        // If input is 0, break out of the loop
        if (userInput != 0) {
            break;
        }

        // Update the lowest value if current input is smaller
        if (userInput < lowest) {
            lowest = userInput;
        }
    }

    // Output the smallest value
    cout << lowest << endl;

    return 0;
}
