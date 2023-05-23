//----------------------------------------------------------------------
#ifndef TEMPDISPLAY_H
#define TEMPDISPLAY_H

//----------------------------------------------------------------------
#include "Observer.hpp"

//----------------------------------------------------------------------
class Subject;
class IUserInterface;

//----------------------------------------------------------------------
class TempDisplay : public Observer
{
public:
    TempDisplay(Subject* sensor, IUserInterface* UI);

    virtual void Update() override { Draw(); }

	void Draw();

private:
	IUserInterface* p_IUserInterface;
};

//----------------------------------------------------------------------
#endif		// #ifndef TEMPDISPLAY_H