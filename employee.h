//
// Created by Owner on 10/19/2017.
//

#ifndef INHERITANCE_EMPLOYEE_H
#define INHERITANCE_EMPLOYEE_H

#include<iostream>
using namespace std;

class employee
{
private:
    string name;        // Employee name
    unsigned long number;       // Employee ID
public:
    void setData();

    virtual void getData();

};


#endif //INHERITANCE_EMPLOYEE_H
