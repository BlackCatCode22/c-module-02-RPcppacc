// Created by Roman P
// Largest of three program 8/20/25


#include <iostream>
using namespace std;

int main() {
    cout << "welcome to Largest of 3 v3." << endl;

    int num1;
    int num2;
    int num3;

    cout << "\n Enter a Value for num1: ";
    cin >> num1;
    cout << "\n you entered " << num1 << "for num1";

    cout << "\n Enter a Value for num2: ";
    cin >> num2;
    cout << "\n you entered " << num2 << "for num2";

    cout << "\n Enter a Value for num3: ";
    cin >> num3;
    cout << "\n you entered " << num3 << "for num3";

    if (num1 > num2) {
        if (num1 > num3) {
            cout << "\n Is the Largest" << num1;
        }else {
            cout << "\n Is the Largest" << num3;
        }
    }else if (num2 > num3) {
        cout << "\n Is the Largest" << num2;
    }else {
        cout << "\n Is the Largest" << num3;
    }
    return 0;
}