#include <iostream>
using namespace std;

void task5() {
    int n;
    int arr[100];
    int sum = 0;
    double average;

    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "Invalid array size." << endl;
        return;
    }

    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    average = (double)sum / n;

    cout << "Average = " << average << endl;
}
