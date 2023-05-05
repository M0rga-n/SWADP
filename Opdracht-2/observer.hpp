#ifndef __OBSERVER_H
#define __OBSERVER_H

#include <list>

class Subject;

class Observer
{
private:
    Subject* m_Subject;

protected:
    Subject* getSubject() const {return m_Subject;}

public:
    Observer();
    Observer(Subject* subject);
    virtual ~Observer();
    virtual void update() =0;
};

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