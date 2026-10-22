#include <iostream>
#include <string>
using namespace std;

void task7() {
    string firstName, lastName, fullName;

    cout << "Enter first name: ";
    cin >> firstName;

    cout << "Enter last name: ";
    cin >> lastName;

    fullName = firstName + " " + lastName;

    cout << "Full name = " << fullName << endl;
}
