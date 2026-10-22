
#include <iostream>
using namespace std;

void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void task7();
int main() {
    int choice;

    cout << "===== LAB TASK MENU =====" << endl;
    cout << "1. Numeric Constant Detection" << endl;
    cout << "2. Operator Detection" << endl;
    cout << "3. Comment Detection" << endl;
    cout << "4. Identifier Detection" << endl;
    cout << "5. Array Average" << endl;
    cout << "6. Minimum and Maximum" << endl;
    cout << "7. Full Name Concatenation" << endl;
    cout << "Enter your choice: ";

    cin >> choice;

    switch (choice) {
        case 1:
            task1();
            break;

        case 2:
            task2();
            break;

        case 3:
            task3();
            break;

        case 4:
            task4();
            break;

        case 5:
            task5();
            break;

        case 6:
            task6();
            break;

        case 7:
            task7();
            break;

        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}
