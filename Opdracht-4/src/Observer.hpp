//----------------------------------------------------------------------
#ifndef OBSERVER_H
#define OBSERVER_H

//----------------------------------------------------------------------
class Subject;

//----------------------------------------------------------------------
class Observer
{
public: 
    Observer(Subject* subject);

    virtual ~Observer();

    virtual void Update() =0;

protected:
    Subject* GetSubject() const { return p_subject; }

private:
    Subject* p_subject;
};

//----------------------------------------------------------------------
#endif // #ifndef OBSERVER_H