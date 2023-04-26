#ifndef POSITIEABLE
#define POSITIEABLE

class Locatie
{
    public:
        virtual ~Locatie() {};

        virtual int x() = 0;
        virtual int y() = 0;
        virtual void move(int, int) = 0;
};

#endif // !POSITIEABLE