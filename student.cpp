//
// Created by Owner on 10/19/2017.
//

#include "student.h"

void student::setEducation()
{
    cout << "\nEnter name of school or university: ";
    cin >> school;
    cin.ignore();
    cout << "\nEnter highest degree earned\n";
    cout << "   (High School, BS, Master, Ph.D): ";
    cin >> degree;
    cin.ignore();
}

void student::getEducation()
{
    cout << "\nSchool or university: " << school;
    cout << "\nHighest degree earned: " << degree;
}
