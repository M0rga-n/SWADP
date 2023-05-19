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
    virtual ~Subject();

    virtual void insert(Observer* observer);

    virtual void remove(Observer* observer);

protected:
    virtual void notify();

private:
    std::list<Observer*> m_Observers;
};

//----------------------------------------------------------------------
#endif      // #ifndef SUBJECT_H