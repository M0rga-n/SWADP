#ifndef POSITIE
#define POSITIE

#include "locatie.hpp"

class Positie : public Locatie
{
    public:
        Positie(int, int);
        virtual int x() override;
        virtual int y() override;
        virtual void move(int, int) override; 

    private:
        int X;
        int Y;
};

#endif // !POSITIE