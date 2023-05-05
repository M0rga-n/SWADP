#ifndef __TEMPERATUUR_H
#define __TEMPERATUUR_H

class Temperatuur
{
public:
    virtual void meet() =0;
    virtual int waarde() const =0;
};

#endif