//----------------------------------------------------------------------
#ifndef MACHINE_H
#define MACHINE_H

//----------------------------------------------------------------------
#include "IMachine.hpp"
#include "Mone.hpp"
#include "Mtwo.hpp"

//----------------------------------------------------------------------
class Machine : public IMachine
{
public:
    Machine(Mone* motor1, Mtwo* motor2);

    virtual Mone* Motor1() const override { return p_Motor1; }

    virtual Mtwo* Motor2() const override { return p_Motor2; }

    virtual void Start() override;

    virtual void Stop() override;

private:
    Mone* p_Motor1;
    
    Mtwo* p_Motor2;
};

//----------------------------------------------------------------------
#endif      // #ifndef MACHINE_H