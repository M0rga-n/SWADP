#include <iostream>
#include "digitalemeter.hpp"
#include "snelheid.hpp"

DigitaleMeter::DigitaleMeter(Snelheid* snelheid) : Observer(snelheid)
{

}

void DigitaleMeter::update()
{
    Snelheid* snelheid = dynamic_cast<Snelheid*>(getSubject());

    if (snelheid != nullptr)
    {
        std::cout << "De Digitale snelheid is: " << snelheid->getWaarde() << std::endl;
        
    }
}