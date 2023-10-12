// Q3- Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and calculate Profit or Loss.

#include <iostream>
using namespace std;

int main()
{
    int cost_price, selling_price;
    cout << "Enter Cost price : " << endl;
    cin >> cost_price;
    cout << "Enter Selling price : " << endl;
    cin >> selling_price;
    int amount;
    if (cost_price < selling_price)
    {
        amount = selling_price - cost_price;
        cout << "Profit = " << amount << endl;
    }
    else if (cost_price > selling_price)
    {
        amount = cost_price - selling_price;
        cout << "Loss = " << amount << endl;
    }
    else
    {
        cout << "No profit and no loss" << endl;
    }

    return 0;
}