// File: diamond.cpp
// Created by Abigail Sturgeon on 10/19/2017 for CS1410.
// Copyright (c) 2017 WSU

#include <iostream>

using namespace std;

// Constants, Structure, Classes
class A
{
public:
    void func();
};

class B:public A
{

};

class C:public A
{

};

class D:public B, public C
{

};

// Main Program Program

int main()
{
    D objD;
    //objD.func();        // ambiguous; wont't compile
    return 0;

}

// Function Definitions