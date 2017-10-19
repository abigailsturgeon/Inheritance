//
// Created by Owner on 10/19/2017.
//

#include "laborer.h"

void foreman::setData()
{
    laborer::setData();
    cout << "\nEnter quotas: ";
    cin >> quotas;
}

void foreman::getData()
{
    laborer::getData();
    cout << "\nQuotas: " << quotas;
}
