//----------------------------------------------------------------------
#include <iostream>
#include "TempDisplay.hpp"
#include "TempSensor.hpp"

//----------------------------------------------------------------------
TempDisplay::TempDisplay(Subject* sensor)
:   Observer(sensor)
{
    
}

void TempDisplay::draw()
{
    TempSensor* sensor = dynamic_cast<TempSensor*>( Observer::getSubject());

    std::cout << sensor->getTemperature() << std::endl;
}