#include "robot.hpp"
#include "locatie.hpp"
#include <iostream>

Robot::Robot(Locatie *p): P(p)
{

}

void Robot::run()
{
    P->move(10,20);
}

void Robot::show()
{
    std::cout<<P->x()<<P->y()<<std::endl;
}