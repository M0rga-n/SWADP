//----------------------------------------------------------------------
#ifndef MACHINE_H
#define MACHINE_H

//----------------------------------------------------------------------
class Motor;

//----------------------------------------------------------------------
class Machine
{
public:
    virtual ~Machine();

    virtual Motor* motor1() const =0;

    virtual Motor* motor2() const =0;

    virtual void start() =0;

    virtual void stop() =0;
};

//----------------------------------------------------------------------
#endif      // #ifndef MACHINE_H