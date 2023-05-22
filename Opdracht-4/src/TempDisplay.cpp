//----------------------------------------------------------------------
#include <iostream>
#include "TempDisplay.hpp"
#include "TempSensor.hpp"
#include "Machine.hpp"

//----------------------------------------------------------------------
TempDisplay::TempDisplay(Subject* sensor)
:   Observer(sensor)
{
	
}

//----------------------------------------------------------------------
void TempDisplay::Draw()
{
	TempSensor* sensor = dynamic_cast<TempSensor*>( Observer::GetSubject());

	if (sensor != nullptr)
		std::cout << sensor->GetTemperature() << std::endl;
}