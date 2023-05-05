#include <iostream>
#include "tempwindow.hpp"
#include "tempimpl.hpp"
#include "robot.hpp"

TemperatuurWindow::TemperatuurWindow(TemperatuurImpl* temperatuurImpl) : Observer(temperatuurImpl)
{

}

void TemperatuurWindow::update()
{
    TemperatuurImpl* temperatuurImpl = dynamic_cast<TemperatuurImpl*>(getSubject());

    if (temperatuurImpl != nullptr)
    {
        std::cout << temperatuurImpl->waarde() << std::endl;
    }
}

int main()
{
    TemperatuurImpl T;
    TemperatuurWindow W(&T);
    RobotImpl R(&T);
    R.checkTemp();
    return 0;
}