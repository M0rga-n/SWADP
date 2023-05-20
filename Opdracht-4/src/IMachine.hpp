//----------------------------------------------------------------------
#ifndef IMACHINE_H
#define IMACHINE_H

//----------------------------------------------------------------------
class Motor;

//----------------------------------------------------------------------
class IMachine
{
public:
    virtual ~IMachine() {}

    virtual Motor* Motor1() const =0;

    virtual Motor* Motor2() const =0;

    virtual void Start() =0;

    virtual void Stop() =0;
};

//----------------------------------------------------------------------
#endif      // #ifndef IMACHINE_H