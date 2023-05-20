//----------------------------------------------------------------------
#ifndef ITEMPSENSOR_H
#define ITEMPSENSOR_H

//----------------------------------------------------------------------
#include "Subject.hpp"

//----------------------------------------------------------------------
class ITempSensor : public Subject
{
public:
    virtual ~ITempSensor() {}

    virtual void read() =0;

    virtual int getTemperature() =0;
};

//----------------------------------------------------------------------
#endif      // #ifndef ITEMPSENSOR_H