//Made by Roman Pena 9/3/25
// Fun with Functions

#include <iostream>
using namespace std;

// function 1

int getnum() {
    int num;
    cout << "enter an interger: ";
    cin >> num;
    return num;


}

// function 2


void compareints(int a, int b) {
    if (a > b) {
        cout << a << " is greater than " << b << endl;
    } else if (b > a) {
        cout << b << " is greater than " << a << endl;
    } else {
        cout << "both numbers are equal" << endl;
    }
}

//function 3

int sumoftwo(int a, int b) {
    return a + b;
}

// main function

int main() {

    int x = getnum();
    int y = getnum();


    compareints(x, y);

    int result = sumoftwo(x, y);
    cout << "The sum of " << x << " and " << y << " is " << result << endl;

    return 0;
}