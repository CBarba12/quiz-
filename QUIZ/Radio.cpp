#include "Radio.h"

Radio::Radio(Componente* pt)
{
    this->ptr = pt;
    this->precioadicional = 1000;
}

Radio::~Radio()
{
}

string Radio::tostring()
{
    stringstream s;
    s << this->ptr->tostring();
    s << "Radio ---" << precioadicional << endl;;

    return s.str();
}

float Radio::costo()
{
    return precioadicional+this->getptr()->costo();
}

Componente* Radio::getptr()
{
    return this->ptr;
}

void Radio::setComponente(Componente* m)
{
    ptr = m;
}
