#ifndef __SUBJECT_H
#define __SUBJECT_H

#include <list>

class Observer;

class Subject
{
private:
    std::list<Observer*> m_List;

protected:
    virtual void notify();

public:
    Subject(){}
    virtual ~Subject(){}
    virtual void insert(Observer* subject) {m_List.push_front(subject);}
    virtual void remove(Observer* subject) {m_List.remove(subject);}


};

#endif