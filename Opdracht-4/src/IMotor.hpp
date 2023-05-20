//----------------------------------------------------------------------
#ifndef IMOTOR_H
#define IMOTOR_H

//----------------------------------------------------------------------
class TempSensor;

//----------------------------------------------------------------------
class IMotor
{
public:
    virtual ~IMotor() {}

    virtual TempSensor* const getTempSensor() =0;

    virtual void start() =0;

    virtual void stop() =0;
};

//----------------------------------------------------------------------
#endif      //#ifndef IMOTOR_H