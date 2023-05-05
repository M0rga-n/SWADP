#ifndef __ROBOT_H
#define __ROBOT_H

class Temperatuur;

class RobotImpl
{
private:
    Temperatuur* m_temperatuur;

public:
    RobotImpl(Temperatuur*);
    virtual void checkTemp();
};

#endif