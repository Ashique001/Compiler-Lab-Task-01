#include <iostream>
#include <string>
using namespace std;

void task3() {
    string input;

    cout << "Enter a comment: ";
    getline(cin >> ws, input);

    int length = input.length();

    if (length >= 2 &&
        input[0] == '/' &&
        input[1] == '/') {

        cout << "Single-line Comment" << endl;
    }
    else if (length >= 4 &&
             input[0] == '/' &&
             input[1] == '*' &&
             input[length - 2] == '*' &&
             input[length - 1] == '/') {

        cout << "Multi-line Comment" << endl;
    }
    else {
        cout << "Not a Comment" << endl;
    }
}
