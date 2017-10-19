// File: createMultiInheritance
// Created by Abigail Sturgeon on 10/19/2017 for CS1410.
// Copyright (c) 2017 WSU

#include <iostream>

using namespace std;

// Constants, Structure, Classes
class A
{
public:
    void show();
};

void A::show()
{
    cout << "Class A\n";
}

class B
{
public:
    void show();
};

void B::show()
{
    cout << "Class B\n";
}
// Main Program Program

class C: public A, public B
{
};
int main()
{
    C objc;     // Object C
    // objc.show();
    objc.A::show();
    objc.B::show();
    return 0;

}

// Function Definitions