#include <iostream>
#include "analogemeter.hpp"
#include "snelheid.hpp"
#include "observer.hpp"

AnalogeMeter::AnalogeMeter(Snelheid* snelheid) : Observer(snelheid)
{
    
}

void AnalogeMeter::update()
{
    Snelheid* snelheid = dynamic_cast<Snelheid*>(getSubject());

    if (snelheid != nullptr)
    {
        std::cout << "De analoge snelheid is: " << snelheid->getWaarde() << std::endl;
        
    }
}