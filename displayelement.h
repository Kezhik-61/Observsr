#ifndef DISPLAYELMENT_H
#define DISPLAYELMENT_H

#include <iostream>
using namespace std;

class DisplayElement
{
public:
    DisplayElement();
    ~DisplayElement();
    virtual void display() = 0;
};

#endif // DISPLAYELMENT_H
