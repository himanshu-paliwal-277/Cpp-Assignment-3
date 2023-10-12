// Q5- Create a calculator using switch statement to perform addition, subtraction, multiplication and division.

#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    float result;
    char op;
    cout << "Enter a 1st number : ";
    cin >> num1;
    cout << "Enter operator : ";
    cin >> op;
    cout << "Enter a 2nd number : ";
    cin >> num2;
    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;

    default:
        cout << "You entered a wrong input" << endl;
        return 0;
    }
    cout << num1 << " " << op << " " << num2 << " = " << result << endl;
    return 0;
}