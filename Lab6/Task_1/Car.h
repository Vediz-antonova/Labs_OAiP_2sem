#ifndef CAR_H
#define CAR_H

#include "QChar"

struct Car
{
    int year;
    double cost;
    QChar type; // 'P' - passenger, 'T' - truck, 'S' - sportcar, etc.
    bool isSummerTires;
    QChar model[50];
    int wheelsYear[4] = {0,0,0,0};
};

#endif // CAR_H
