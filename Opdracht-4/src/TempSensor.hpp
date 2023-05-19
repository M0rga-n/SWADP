//----------------------------------------------------------------------
#ifndef TEMPSENSOR_H
#define TEMPSENSOR_H

//----------------------------------------------------------------------
class TempSensor
{
public:
    virtual ~TempSensor();

    virtual void read() =0;

    virtual int getTemperature() =0;
};

//----------------------------------------------------------------------
#endif      // #ifndef TEMPSENSOR_H