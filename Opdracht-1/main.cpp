#include "positie.hpp"
#include "robot.hpp"

int main() 
{
    Positie P(5,10);
    Robot R(&P);
    R.run();
    R.show();

    return 0;
}