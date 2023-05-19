//----------------------------------------------------------------------
#ifndef MOTOR_H
#define MOTOR_H

//----------------------------------------------------------------------
class TempSensor;

//----------------------------------------------------------------------
class Motor
{
public:
    virtual ~Motor();

    virtual TempSensor* const getTempSensor() =0;

    virtual void start() =0;

    virtual void stop() =0;
};

//----------------------------------------------------------------------
#endif      //#ifndef MOTOR_H