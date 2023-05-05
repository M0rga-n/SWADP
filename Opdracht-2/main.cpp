#include "snelheid.hpp"
#include "auto.hpp"
#include "digitalemeter.hpp"
#include "analogemeter.hpp"

int main()
{
    Snelheid S;
    DigitaleMeter DM(&S);
    AnalogeMeter AM(&S);
    Auto A(&S);
    A.meetSnelheid();
    
    return 0;
}