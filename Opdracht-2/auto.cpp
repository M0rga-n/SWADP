#include "auto.hpp"
#include "snelheid.hpp"

Auto::Auto(Snelheid* subject) : m_Snelheid(subject)
{

}

void Auto::meetSnelheid()
{
    m_Snelheid->meet();
}