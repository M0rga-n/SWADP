#include <iostream>
#include "snelheid.hpp"

void Snelheid::meet()
{
    measure();
    notify();
}

float Snelheid::getWaarde()
{
    return m_waarde;
}

void Snelheid::measure()
{
    std::cout << "Enter speed: ";
    std::cin >> m_waarde;
}