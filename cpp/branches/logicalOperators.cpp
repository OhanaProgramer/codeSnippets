//Demonstartes using logical operators to detect ranges with gaps
// Created by: Jacque Wilson on 10/05/2024 - OhanaCodes

#include <iostream>
using namespace std;

int main() {
    int age = 18;
    if ((age >= 18 && age <= 30) || (age >= 50 && age <= 60)) {
        cout << "You are between 18 and 30 years old or between 50 and 60 years old." << endl;
    } else {
        cout << "You are not between 18 and 30 years old or between 50 and 60 years old." << endl;
    }
    return 0;
}

// Output:
// You are between 18 and 30 years old or between 50 and 60 years old.