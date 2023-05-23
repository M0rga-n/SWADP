//----------------------------------------------------------------------
#include "Motor.hpp"
#include "TempSensor.hpp"

//----------------------------------------------------------------------
Motor::Motor(TempSensor* sensor)
:   p_TempSensor(sensor)
{

}

//----------------------------------------------------------------------
TempSensor* const Motor::GetTempSensor()
{
    return p_TempSensor;
}

//----------------------------------------------------------------------
void Motor::Start()
{
	m_Voltage = 24;
	p_TempSensor->Read();
}

//----------------------------------------------------------------------
void Motor::Stop()
{
    m_Voltage = 0;
}