// Q1 - Write a program which takes the values of length and breadth from user and check if it is a square or not.

#include <iostream>
using namespace std;

int main()
{
    int length, breadth;
    cout << "Enter a length : " << endl;
    cin >> length;
    cout << "Enter a breadth : " << endl;
    cin >> breadth;
    if (length == breadth)
    {
        cout << "This is a square" << endl;
    }

    else
    {
        cout << "This is a rectangle" << endl;
    }

    return 0;
}