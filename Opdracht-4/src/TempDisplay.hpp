//----------------------------------------------------------------------
#ifndef TEMPDISPLAY_H
#define TEMPDISPLAY_H

//----------------------------------------------------------------------
#include "Observer.hpp"

//----------------------------------------------------------------------
class Subject;
class Machine;

//----------------------------------------------------------------------
class TempDisplay : public Observer
{
public:
    TempDisplay(Subject* sensor);

    virtual void Update() override { Draw(); }

    void Draw() override;
};

//----------------------------------------------------------------------
#endif		// #ifndef TEMPDISPLAY_H