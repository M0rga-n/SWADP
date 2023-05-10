#include "auto.hpp"
#include "snelheid.hpp"

Auto::Auto(Snelheid* subject) : m_snelheid(subject)
{

}

void Auto::meetSnelheid()
{
    m_snelheid->Snelheid::meet();
}