#ifndef __AUTO_H
#define __AUTO_H

class Snelheid;

class Auto
{
private:
    Snelheid* m_snelheid;

public:
    Auto(Snelheid*);
    virtual ~Auto();
    virtual void meetSnelheid();
};
#endif // !__AUTO_H