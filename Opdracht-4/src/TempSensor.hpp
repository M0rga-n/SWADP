//----------------------------------------------------------------------
#ifndef TEMPSENSOR_H
#define TEMPSENSOR_H

//----------------------------------------------------------------------
#include "ITempSensor.hpp"

//----------------------------------------------------------------------
class TempSensor : public ITempSensor
{
public:
    TempSensor();

    virtual void Read() override;

    virtual int GetTemperature() override { return m_Temperature; };

private:
    int m_Temperature;
};

//----------------------------------------------------------------------
#endif      // #ifndef TEMPSENSOR_H