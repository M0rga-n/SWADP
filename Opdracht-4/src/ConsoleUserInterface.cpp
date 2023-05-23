//----------------------------------------------------------------------
#include <iostream>
#include "ConsoleUserInterface.hpp"
#include "Machine.hpp"

//----------------------------------------------------------------------
ConsoleUserInterface::ConsoleUserInterface(Machine* machine)
:	p_Machine(machine)
{

}

//----------------------------------------------------------------------
void ConsoleUserInterface::Run()
{
	p_Machine->Start();
}

//----------------------------------------------------------------------
void ConsoleUserInterface::Halt()
{
	p_Machine->Stop();
}

//----------------------------------------------------------------------
void ConsoleUserInterface::DrawInt(int temp)
{
	std::cout << "Temp: " << temp << std::endl;
}