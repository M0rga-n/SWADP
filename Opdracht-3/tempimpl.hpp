#ifndef __TEMPIMPL_H
#define __TEMPIMPL_H

#include "temperatuur.hpp"
#include "subject.hpp"

class TemperatuurImpl : public Temperatuur, public Subject
{
private:
    int m_temperatuur;

public:
    virtual void meet() override;
    virtual int waarde() const override { return m_temperatuur;}
    virtual void haalwaarde();
};

#endif