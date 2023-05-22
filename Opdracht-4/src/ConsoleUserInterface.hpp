//----------------------------------------------------------------------
#ifndef CONSOLEUSERINTERFACE_H
#define CONSOLEUSERINTERFACE_H

//----------------------------------------------------------------------
#include "IUserInterface.hpp"

//----------------------------------------------------------------------
class Machine;

//----------------------------------------------------------------------
class ConsoleUserInterface : public IUserInterface
{
public:
	ConsoleUserInterface(Machine* machine);

	virtual void Run() override;

	virtual void Halt() override;

	virtual void DrawInt(int temp) override;

private:
	Machine* p_Machine;
};

//----------------------------------------------------------------------
#endif		// #ifndef CONSOLEUSERINTERFACE_H