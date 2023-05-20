//----------------------------------------------------------------------
#include "Machine.hpp"
#include "Motor.hpp"

//----------------------------------------------------------------------
Machine::Machine(Mone* motor1, Mtwo* motor2)
:   p_Motor1(motor1),
    p_Motor2(motor2)
{

}

//----------------------------------------------------------------------
void Machine::Start()
{
    p_Motor1->Start();
    p_Motor2->Start();
}

//----------------------------------------------------------------------
void Machine::Stop()
{
    p_Motor1->Stop();
    p_Motor2->Stop();
}