//
// Created by Owner on 10/19/2017.
//

#ifndef INHERITANCE_SCIENTIST_H
#define INHERITANCE_SCIENTIST_H


#include "employee.h"

class scientist : public employee
{
private:
    int pubs;       // Publications
public:
    void setData();
    void getData();

};


#endif //INHERITANCE_SCIENTIST_H
