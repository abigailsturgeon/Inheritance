//
// Created by Owner on 10/19/2017.
//

#include "employee.h"

void employee::setData()
{
    cout << "\nEnter last name: ";
    cin >> name;
    cin.ignore();
    cout << "\nEnter ID Number: ";
    cin >> number;
}

void employee::getData()
{
    cout << "\nName: " << name;
    cout << "\nID Number: " << number;
}
