//----------------------------------------------------------------------
#include "Observer.hpp"
#include "Subject.hpp"

//----------------------------------------------------------------------
Observer::Observer(Subject* subject)
:   p_subject(subject)
{
	GetSubject()->Insert(this);
}

//----------------------------------------------------------------------
Observer::~Observer()
{
	GetSubject()->Remove(this);
}