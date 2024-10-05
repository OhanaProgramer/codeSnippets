// Switch Statement

#include <iostream>
using namespace std;

int main()
{
    // swtich statement
    /*
    switch (expression) {
        case const_expr:
            statements
            break;
        case const_expr:
            statements
            break;
        ...
        default:
            statements will execute if no other case matches
    }
    */

    int number = 0;

    // prompt user to enter a number
    cout << "Enter a number between 0 and 3: ";
    cin >> number;

    switch (number) {
    case 0:
        cout << number << " is spelled zero" << endl;
        break;
    case 1:
        cout << number << " is spelled one" << endl;
        break;
    case 2:
        cout << number << " is spelled two" << endl;
        break;
    case 3:
        cout << number << " is spelled three" << endl;
        break;
    default:
        cout << "Invalid number" << endl;
        break;
    }

    // Omitting the break statement for a case will cause the 
    // statements within the next case to be executed. This is
    // called "fall through" cases.

    // program that estimates the equivalent age of a dog in human years

    int dogAgeYears;
    int dogAgeMonths;

    // prompt user to enter dog's age (in years)
    cout << "Enter your dog's age in years: ";
    cin >> dogAgeYears;

    if (dogAgeYears == 0) {
        //prompt user to enter age in months
        cout << "Enter dog's age in months: ";
        cin >> dogAgeMonths;

        switch (dogAgeMonths) {
        case 0:
        case 1:
        case 2:
            cout << "Your dog is less than 14 months old in human years" << endl;
            break;
        case 3:
        case 4:
        case 5:
        case 6:
            cout << "Your dog is between 14 months and 5 years old in human years" << endl;
            break;
        case 7:
        case 8:
            cout << "Your dog is between 5 and 9 years old in human years" << endl;
            break;
        case 9:
        case 10:
        case 11:
        case 12:
            cout << "Your dog is between 9 and 15 years old in human years" << endl;
            break;
        default:
            cout << "Incorrect input" << endl;
            break;
        }
    }
    else {
        switch(dogAgeYears) {
            // cases for age in years
        }
    }


    return 0;
}

