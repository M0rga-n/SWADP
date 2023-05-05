#include <iostream>
#include "robot.hpp"
#include "tempimpl.hpp"

RobotImpl::RobotImpl(Temperatuur* temperatuur) : m_temperatuur(temperatuur)
{

}

void RobotImpl::checkTemp()
{
    m_temperatuur->meet();
}

void TemperatuurImpl::meet()
{
    haalwaarde();
    notify();
}

void TemperatuurImpl::haalwaarde()
{
    std::cout << "Enter temperatuur: ";
    std::cin >> m_temperatuur;
}