#ifndef POSITIEABLE
#define POSITIEABLE

class Positiable
{
    public:
        virtual ~Positiable();

        virtual int x() = 0;
        virtual int y() = 0;
        virtual void move() = 0;
};

#endif // !POSITIEABLE