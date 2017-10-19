//
// Created by Owner on 10/19/2017.
//

#ifndef INHERITANCE_MANAGER_H
#define INHERITANCE_MANAGER_H


#include "employee.h"

class manager : public employee
{
private:
    string title;       // "president", etc.
    double dues;        // Golf club dues
public:
    void setData();
    void getData();

};


#endif //INHERITANCE_MANAGER_H
