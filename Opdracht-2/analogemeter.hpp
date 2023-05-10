#ifndef __METERS_H
#define __METERS_H

#include "observer.hpp"

class Snelheid;

class AnalogeMeter : public Observer
{
private:
    float m_speed = 2.5;

public:
    AnalogeMeter(Snelheid*);
    virtual ~AnalogeMeter() {}
    virtual void update() override;
};

#endif // !__METERS_H