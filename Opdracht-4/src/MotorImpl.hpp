//----------------------------------------------------------------------
#ifndef MOTORIMPL_H
#define MOTORIMPL_H

//----------------------------------------------------------------------
#include "Motor.hpp"

//----------------------------------------------------------------------
class TempSensor;

//----------------------------------------------------------------------
class MotorImpl : public Motor
{
public:
    MotorImpl(TempSensor* sensor);

    virtual TempSensor* const getTempSensor() override;

    virtual void start() override;

    virtual void stop() override;

private:
    TempSensor* p_TempSensor;
};

//----------------------------------------------------------------------
#endif // #ifndef MOTORIMPL_H