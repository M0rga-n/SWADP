#ifndef __TEMPWINDOW_H
#define __TEMPWINDOW_H

#include "observer.hpp"

class TemperatuurImpl;

class TemperatuurWindow : public Observer
{
public:
    TemperatuurWindow(TemperatuurImpl*);
    virtual void update() override;
};

#endif