#ifndef POSITIEABLE
#define POSITIEABLE

#include <iostream>

class Locatie
{
    public:
        virtual ~Locatie() {};

        virtual int x() = 0;
        virtual int y() = 0;
        virtual void move(int dx, int dy) = 0;
};

#endif // !POSITIEABLE