//----------------------------------------------------------------------
#ifndef IMACHINE_H
#define IMACHINE_H

//----------------------------------------------------------------------
class Motor;

//----------------------------------------------------------------------
class IMachine
{
public:
    virtual ~IMachine() {}

    virtual Motor* motor1() const =0;

    virtual Motor* motor2() const =0;

    virtual void start() =0;

    virtual void stop() =0;
};

//----------------------------------------------------------------------
#endif      // #ifndef IMACHINE_H