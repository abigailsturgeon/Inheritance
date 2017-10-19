//
// Created by Owner on 10/19/2017.
//

#include "manager.h"

void manager::setData()
{
    employee::setData();
    cout << "\nEnter your title: ";
    cin >> title;
    cin.ignore();
    cout << "\nEnter golf club dues: ";
    cin >> dues;
    student::setEducation();
}

void manager::getData()
{
    employee::getData();
    cout << "\nTitle: " << title;
    cout << "\nGolf dues: " << dues;
    student::getEducation();
}
