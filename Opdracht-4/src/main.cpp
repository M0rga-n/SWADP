//----------------------------------------------------------------------
#include "Machine.hpp"
#include "TempSensor.hpp"
#include "Motor.hpp"
#include "Mone.hpp"
#include "Mtwo.hpp"

//----------------------------------------------------------------------
int main()
{
	TempSensor tempSensor1, tempSensor2;
	Motor motor1(tempSensor1);
	Motor motor2(tempSensor2);
	Machine machine(motor1, motor2);
}