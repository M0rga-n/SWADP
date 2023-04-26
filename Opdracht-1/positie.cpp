#include "positie.hpp"

Positie::Positie(int x, int y): X(x), Y(y)
{

}

int Positie::x()
{
    return X;
}

int Positie::y()
{
    return Y;
}

void Positie::move(int dx, int dy)
{
    X=X+dx;
    Y=Y+dy;
}