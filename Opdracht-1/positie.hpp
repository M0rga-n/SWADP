#ifndef POSITIE
#define POSITIE

#include "locatie.hpp"

class Positie : public Locatie
{
    public:
        Positie(int, int);
        virtual int x();
        virtual int y();
        virtual void move(int, int);

    private:
        int X;
        int Y;
};

#endif // !POSITIE