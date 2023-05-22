//----------------------------------------------------------------------
#ifndef IUSERINTERDACE_H
#define IUSERINTERDACE_H

//----------------------------------------------------------------------
class IUserInterface
{
public:
	virtual ~IUserInterface() {}

	virtual void Run() = 0;

	virtual void Halt() = 0;

	virtual void DrawInt(int temp) = 0;
};
//----------------------------------------------------------------------
#endif // #ifndef IUSERINTERDACE_H