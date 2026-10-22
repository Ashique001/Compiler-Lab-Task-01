
#include <iostream>
#include <string>
using namespace std;

void task4() {
    string input;
    bool isIdentifier = true;

    cout << "Enter an identifier: ";
    cin >> input;

    // Check the first character
    if (!((input[0] >= 'A' && input[0] <= 'Z') ||
          (input[0] >= 'a' && input[0] <= 'z') ||
          input[0] == '_')) {
        isIdentifier = false;
    }

    // Check the remaining characters
    for (int i = 1; i < input.length(); i++) {
        if (!((input[i] >= 'A' && input[i] <= 'Z') ||
              (input[i] >= 'a' && input[i] <= 'z') ||
              (input[i] >= '0' && input[i] <= '9') ||
              input[i] == '_')) {
            isIdentifier = false;
            break;
        }
    }

    if (isIdentifier) {
        cout << "Valid Identifier" << endl;
    } else {
        cout << "Invalid Identifier" << endl;
    }
}

