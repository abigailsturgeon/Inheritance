//
// Created by Owner on 10/19/2017.
//

#include "scientist.h"

void scientist::setData()
{
    employee::setData();
    cout << "\nEnter the number of publications: ";
    cin >> pubs;

}

void scientist::getData()
{
    employee::getData();
    cout << "\nNumber of publications: " << pubs << endl;
}
