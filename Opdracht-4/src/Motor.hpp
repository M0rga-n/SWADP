//----------------------------------------------------------------------
#ifndef MOTOR_H
#define MOTOR_H

//----------------------------------------------------------------------
#include "IMotor.hpp"

//----------------------------------------------------------------------
class TempSensor;

//----------------------------------------------------------------------
class Motor : public IMotor
{
public:
    Motor(TempSensor* sensor);

    virtual TempSensor* const getTempSensor() override;

    virtual void start() override;

    virtual void stop() override;

private:
    TempSensor* p_TempSensor;

    int m_Voltage;
};

//----------------------------------------------------------------------
#endif // #ifndef MOTOR_H