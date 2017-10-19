// File: testDistance.cpp
// Created by Abigail Sturgeon on 10/17/2017 for CS1410.
// Copyright (c) 2017 WSU

#include <iostream>
#include "Distance.h"


using namespace std;

int main()
{
    Distance d1, d2;
    cout << d1 << endl;
    d1.setFeet(2);
    d1.setInches(3.5);
    cout << d1 << endl;

    if(d1 == d2)
    {
        cout<< "The same" << endl;
    }
    cout << "Done" << endl;

    DistSign alpha;
    cout << alpha << endl;
    return 0;

}
