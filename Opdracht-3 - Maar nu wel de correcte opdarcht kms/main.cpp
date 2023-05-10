// ================================================================
// Infrastructure Layer
// ================================================================

#include <iostream>
#include <list>
#include <string>

class Subject;

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

class Subject
{
private:
    std::list<Observer*> m_List;

protected:
    virtual void notify();

public:
    virtual ~Subject() {};
    virtual void insert(Observer* observer) { m_List.push_back(observer); }
    virtual void remove(Observer* observer) { m_List.remove(observer); }
};

Observer::Observer(Subject* subject) : m_Subject(subject)
{
    getSubject()->insert(this);
}

Observer::~Observer()
{
    getSubject()->remove(this);
}

void Subject::notify()
{
    for (auto observer : m_List)
    {
        observer->update();
    };
}

// ================================================================
// DomainLayer
// ================================================================

class Element
{
public:
    virtual ~Element() {}
    virtual void draw() =0;
    virtual std::string name() =0;
};

class Ninja : public Element, public Subject
{
private:
    std::string m_Name;
    int m_AantalLevens;

public:
    Ninja(std::string);
    virtual ~Ninja() {};
    virtual void draw() override;
    virtual std::string name() override { return m_Name; }
    virtual void incLevens();
    virtual void decLevens();
};

Ninja::Ninja(std::string name) : m_Name(name)
{
    m_AantalLevens = 1;
}

void Ninja::draw()
{
    std::cout << name() << " " << m_AantalLevens << std::endl;
}

void Ninja::incLevens()
{
    m_AantalLevens++;
    Subject::notify();
}

void Ninja::decLevens()
{
    m_AantalLevens--;
    Subject::notify();
}
// ================================================================
// InterfaceLayer
// ================================================================

class NinjaWindow : public Observer
{
private:
    Ninja* m_Ninja;

public:
    NinjaWindow(Ninja*);
    virtual ~NinjaWindow() {}
    virtual void draw() { m_Ninja->draw(); }
    virtual void update() override { draw(); }
};

NinjaWindow::NinjaWindow(Ninja* ninja) : Observer(ninja), m_Ninja(ninja)
{

}

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