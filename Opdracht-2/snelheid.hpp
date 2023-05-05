#ifndef __SNELHEID_H
#define __SNELHEID_H

#include "observer.hpp"

class Snelheid : public Subject
{
private:
    float m_waarde = 0;

public:
    virtual void meet();
    virtual float getWaarde();
    virtual void measure();
};

#endif