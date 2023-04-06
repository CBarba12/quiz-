#include "Internet.h"

Internet::Internet(Componente* pt)
{
    ptr = pt;
    precioadicional = 4000;


}

string Internet::tostring()
{
    stringstream s;
    s << this->ptr->tostring();
    s << "Internet ---" << precioadicional<<endl;

    return s.str();
}

float Internet::costo()
{
    return precioadicional + this->getptr()->costo();;
}
Componente* Internet::getptr()
{
    return this->ptr;
}

void Internet::setComponente(Componente* m)
{
    this->ptr = m;
}
