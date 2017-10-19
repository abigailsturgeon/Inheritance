//
// Created by Owner on 10/19/2017.
//

#ifndef INHERITANCE_LABORER_H
#define INHERITANCE_LABORER_H


#include "employee.h"

class laborer : public employee
{

};

class foreman : public laborer
{
private:
    float quotas;       // Percent of quotas met
public:
    void setData();
    void getData();
};

#endif //INHERITANCE_LABORER_H
