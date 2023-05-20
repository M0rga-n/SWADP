//----------------------------------------------------------------------
#ifndef TEMPDISPLAY_H
#define TEMPDISPLAY_H

//----------------------------------------------------------------------
#include "Observer.hpp"

//----------------------------------------------------------------------
class Subject;

//----------------------------------------------------------------------
class TempDisplay : public Observer
{
public:
    TempDisplay(Subject* sensor);

    virtual void update() override { draw(); }

    void draw();
};

//----------------------------------------------------------------------
#endif      // #ifndef TEMPDISPLAY_H