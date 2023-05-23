//----------------------------------------------------------------------
#include <iostream>
#include "TempDisplay.hpp"
#include "TempSensor.hpp"
#include "IUserInterface.hpp"

//----------------------------------------------------------------------
TempDisplay::TempDisplay(Subject* sensor, IUserInterface* UI)
:   Observer(sensor),
	p_IUserInterface(UI)
{
	
}

//----------------------------------------------------------------------
void TempDisplay::Draw()
{
	TempSensor* sensor = dynamic_cast<TempSensor*>( Observer::GetSubject());

	if (sensor != nullptr)
		p_IUserInterface->DrawInt(sensor->GetTemperature());
}