// ================================================================
// Infrastructure Layer
// ================================================================

//----------------------------------------------------------------------
#include <iostream>
#include <list>
#include <string>

//----------------------------------------------------------------------
class Subject;

//----------------------------------------------------------------------
class Observer
{
private:
    Subject* m_Subject;

protected:
    Subject* getSubject() const { return m_Subject; }

public:
    Observer(Subject*);
    virtual ~Observer();
    virtual void update () =0;
};

//----------------------------------------------------------------------
class Subject
{

public:
    virtual ~Subject() {};

    virtual void insert(Observer* observer) { m_List.push_back(observer); }

    virtual void remove(Observer* observer) { m_List.remove(observer); }

protected:
    virtual void notify();

private:
    std::list<Observer*> m_List;
};

//----------------------------------------------------------------------
Observer::Observer(Subject* subject) : m_Subject(subject)
{
    getSubject()->insert(this);
}

//----------------------------------------------------------------------
Observer::~Observer()
{
    getSubject()->remove(this);
}

//----------------------------------------------------------------------
void Subject::notify()
{
    for (Observer* observer : m_List)
    {
        observer->update();
    };
}

//----------------------------------------------------------------------

// ================================================================
// DomainLayer
// ================================================================

//----------------------------------------------------------------------
class Element
{
public:
    virtual ~Element() {}

    virtual void draw() =0;

    virtual std::string name() =0;
};

//----------------------------------------------------------------------
class Ninja : public Element, public Subject
{
public:
    Ninja(std::string);

    virtual ~Ninja() {};

    virtual void draw() override;

    virtual std::string name() override { return m_Name; }

    virtual void incLevens();

    virtual void decLevens();

private:
    std::string m_Name;

    int m_AantalLevens;

};

//----------------------------------------------------------------------
Ninja::Ninja(std::string name) : m_Name(name)
{
    m_AantalLevens = 1;
}

//----------------------------------------------------------------------
void Ninja::draw()
{
    std::cout << name() << " " << m_AantalLevens << std::endl;
}

//----------------------------------------------------------------------
void Ninja::incLevens()
{
    m_AantalLevens++;
    notify();
}

//----------------------------------------------------------------------
void Ninja::decLevens()
{
    m_AantalLevens--;
    notify();
}
//----------------------------------------------------------------------

// ================================================================
// InterfaceLayer
// ================================================================

//----------------------------------------------------------------------

class NinjaWindow : public Observer
{
public:
    NinjaWindow(Ninja*);

    virtual ~NinjaWindow() {}

    virtual void draw();

    virtual void update() override { draw(); }

};

//----------------------------------------------------------------------
NinjaWindow::NinjaWindow(Ninja* ninja) : Observer(ninja)
{

}

//----------------------------------------------------------------------
void NinjaWindow::draw()
{
    Ninja* ninja = dynamic_cast<Ninja*>(getSubject());

    if (ninja != nullptr)
    {
        ninja->draw();
    }
}

//----------------------------------------------------------------------
int main()
{
    Ninja h("henk"), j("joop");

    NinjaWindow hW(&h), jW(&j);

    h.incLevens();
    h.incLevens();
    j.incLevens();
    j.incLevens();
    j.incLevens();
    h.incLevens();
    j.decLevens();
    h.decLevens();

    return 0;
}