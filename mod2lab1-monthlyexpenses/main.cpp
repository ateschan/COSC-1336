//Addison Teschan
//January 26 2024
//This program is intended to calculate monthly expenses

#include <iostream>

using namespace std;

int main()
{
    string month;
    double rent, water, electricity;
    double total;

    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the rent: ";
    cin >> rent;
    cout << "Enter the water bill: ";
    cin >> water;
    cout << "Enter the electricity bill: ";
    cin >> electricity;

    total = rent + water + electricity;

    cout << "Your monthly expenses for " << month << "\n------------------------------\n" << "Rent: " << rent << "\nWater: " << water << "\nElectricity: " << electricity << "\nTotal: " << total << endl;
}

