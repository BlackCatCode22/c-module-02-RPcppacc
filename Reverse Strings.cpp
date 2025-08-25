// Created by Roman Pena on 8/25/25
//Reverse A String Program

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
cout << "\n\n Welcome to Reverse a Strings! \n\n";

    // create a sting to Reverse

    string rev1 = " Hello String people ";
    cout << " \n a long string to reverse is: " << rev1;
    //part 1
    //use a reverse function from the variable name algorithm

    reverse (rev1.begin(), rev1.end());


    cout << " \n My reversed string is: " << rev1;


    //part 2 use a for loop to swap characters

    for (int i=0; i<100; i++) {
        cout << "\n the value of i is " << i << "\n";
    }


    return 0;
}