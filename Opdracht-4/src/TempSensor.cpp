//----------------------------------------------------------------------
#include <iostream>
#include "TempSensor.hpp"

//----------------------------------------------------------------------
TempSensor::TempSensor()
:   m_Temperature(0)
{

}

void TempSensor::Read()
{
    std::cin >> m_Temperature;

    Subject::Notify();
}