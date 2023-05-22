//----------------------------------------------------------------------
#include "Subject.hpp"
#include "Observer.hpp"

//----------------------------------------------------------------------
void Subject::Insert(Observer* observer)
{
	m_Observers.push_back(observer);
}

//----------------------------------------------------------------------
void Subject::Remove(Observer* observer)
{
	m_Observers.remove(observer);
}

//----------------------------------------------------------------------
void Subject::Notify()
{
	for(Observer* const observer : m_Observers)
	{
		observer->Update();
	}
}