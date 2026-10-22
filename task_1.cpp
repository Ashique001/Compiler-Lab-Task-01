#include <iostream>
#include <string>
using namespace std;

void task1() {
    string input;
    bool isNumeric = true;

    cout << "Enter a value: ";
    cin >> input;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] < '0' || input[i] > '9') {
            isNumeric = false;
            break;
        }
    }

    if (isNumeric) {
        cout << "Numeric Constant" << endl;
    } else {
        cout << "Not Numeric" << endl;
    }
}
