//----------------------------------------------------------------------
#include "Observer.hpp"
#include "Subject.hpp"

//----------------------------------------------------------------------
Observer::Observer(Subject* subject)
:   p_subject(subject)
{
    getSubject()->insert(this);
}

//----------------------------------------------------------------------
Observer::~Observer()
{
    getSubject()->remove(this);
}

//----------------------------------------------------------------------
void Subject::insert(Observer* observer)
{
    m_Observers.push_back(observer);
}

//----------------------------------------------------------------------
void Subject::remove(Observer* observer)
{
    m_Observers.remove(observer);
}

//----------------------------------------------------------------------
void Subject::notify()
{
    for(Observer* const observer : m_Observers)
    {
        observer->update();
    }
}