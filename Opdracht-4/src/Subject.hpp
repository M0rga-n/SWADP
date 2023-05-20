//----------------------------------------------------------------------
#ifndef SUBJECT_H
#define SUBJECT_H

//----------------------------------------------------------------------
#include <list>

//----------------------------------------------------------------------
class Observer;

//----------------------------------------------------------------------
class Subject
{
public:
    virtual ~Subject() {}

    virtual void Insert(Observer* observer);

    virtual void Remove(Observer* observer);

protected:
    virtual void Notify();

private:
    std::list<Observer*> m_Observers;
};

//----------------------------------------------------------------------
#endif      // #ifndef SUBJECT_H