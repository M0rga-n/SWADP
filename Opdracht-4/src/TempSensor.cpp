//----------------------------------------------------------------------
#include <iostream>
#include "TempSensor.hpp"

//----------------------------------------------------------------------
TempSensor::TempSensor()
:   m_Temperature(0)
{

}

void TempSensor::read()
{
    std::cin >> m_Temperature;

    Subject::notify();
}