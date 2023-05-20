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

    virtual TempSensor* const GetTempSensor() =0;

    virtual void Start() =0;

    virtual void Stop() =0;
};

//----------------------------------------------------------------------
#endif      //#ifndef IMOTOR_H