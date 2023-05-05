#ifndef __DIGITALEMETER_H
#define __DIGITALEMETER_H

#include "observer.hpp"

class Snelheid;

class DigitaleMeter : public Observer
{
private:
    float m_speed = 2.5;

public:
    DigitaleMeter(Snelheid*);
    virtual void update() override;
};

#endif // !__DIGITALEMETER_H