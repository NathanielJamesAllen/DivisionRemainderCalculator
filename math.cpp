// Source2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    float num1, answer1;
    int num2, num3, answer2, answer3;

    //Input
    cout << "Enter the floating point number: ";
    cin >> num1;

    cout << "Enter the first integer:  ";
    cin >> num2;

    cout << "Enter the second integer:  ";
    cin >> num3;

    //Processing
    answer1 = num1 / num2;
    answer2 = num2 / num3;
    answer3 = num2 % num3;

    //Output
    cout << "Answer 1 is:  " << answer1 << endl;
    cout << "Answer 2 is:  " << answer2 << endl;
    cout << "Answer 3 is:  " << answer3 << endl;

    return 0;


}


