#ifndef POSITIE
#define POSITIE

#include "locatie.hpp"

class Positie : public Locatie
{
    public:
        Positie(int x, int y);
        virtual int x();
        virtual int y();
        virtual void move(int dx, int dy);

    private:
        int X;
        int Y;
};

#endif // !POSITIE