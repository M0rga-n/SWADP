#ifndef ROBOT
#define ROBOT

#include <memory>
class Locatie;

class Robot 
{
    public:
        Robot(Locatie *p);
        virtual ~Robot() {};
        virtual void run();
        virtual void show();
    
    private:
        Locatie* P;
};

#endif // !ROBOT