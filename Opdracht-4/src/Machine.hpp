//----------------------------------------------------------------------
#ifndef MACHINE_H
#define MACHINE_H

//----------------------------------------------------------------------
#include "IMachine.hpp"

//----------------------------------------------------------------------
class Motor;

//----------------------------------------------------------------------
class Machine : public IMachine
{
public:
    Machine(Motor* motor1, Motor* motor2);

    virtual Motor* Motor1() const override { return p_Motor1; }

    virtual Motor* Motor2() const override { return p_Motor2; }

    virtual void Start() override;

    virtual void Stop() override;

private:
    Motor* p_Motor1;
    
    Motor* p_Motor2;
};

//----------------------------------------------------------------------
#endif      // #ifndef MACHINE_H