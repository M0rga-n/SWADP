#ifndef __OBSERVER_H
#define __OBSERVER_H

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

#endif