#include "observer.hpp"
#include "subject.hpp"

void Subject::notify()
{
    for (auto const& i : m_List) i->update();
}

Observer::Observer (Subject* subject) : m_Subject(subject)
{
    getSubject()->insert(this);
}

Observer::~Observer()
{
    getSubject()->remove(this);
}