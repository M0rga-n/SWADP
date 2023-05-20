//----------------------------------------------------------------------
#include <iostream>
#include "TempDisplay.hpp"
#include "TempSensor.hpp"

//----------------------------------------------------------------------
TempDisplay::TempDisplay(Subject* sensor)
:   Observer(sensor)
{
    
}

void TempDisplay::Draw()
{
    TempSensor* sensor = dynamic_cast<TempSensor*>( Observer::GetSubject());

    std::cout << sensor->GetTemperature() << std::endl;
}