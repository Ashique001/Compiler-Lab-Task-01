#include <iostream>
#include <string>
using namespace std;

void task2() {
    string input;
    int count = 0;

    cout << "Enter an expression: ";
    cin >> input;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/' || input[i] == '%' || input[i] == '=')

            {

            count++;

            cout << "operator" << ": " << input[i] << endl;

            }
    }

    if (count == 0) {
        cout << "No operator found." << endl;
    }
}
