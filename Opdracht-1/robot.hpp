#ifndef ROBOT
#define ROBOT

class Locatie;

class Robot 
{
    public:
        Robot(Locatie *p);
        virtual ~Robot() {};
        virtual void run();
        virtual void show();
    
    private:
        Locatie *P;
};

#endif // !ROBOT