// Chapter 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <string>
#include <iostream>

using namespace std;
int main()
{   
    int number1, number2, number3;
    cout << "Please enter 3 numbers: " << endl;
    cin >> number1;
    cin >> number2;
    cin >> number3;
    int avg = (number1 + number2 + number3) / 3;
    int sum = (number1 + number2 + number3);
    cout << " The sum of the numbers is " << sum << endl;
    cout << " The average of the numbers is " << avg << endl;
}
