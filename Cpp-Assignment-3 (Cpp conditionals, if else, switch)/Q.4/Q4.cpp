// Q4- Write a program to print positive number entered by the user, if user enters a negative number, it is skipped.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number : " << endl;
    cin >> num;
    if (num >= 0)
    {
        cout << "You entered positive number" << endl;
    }
    else
    {
        cout << "You entered a negative number, it is skipped" << endl;
    }
    return 0;
}