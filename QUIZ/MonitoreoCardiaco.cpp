#include "MonitoreoCardiaco.h"

MonitoreoCardiaco::MonitoreoCardiaco(Componente* pt)
{
	this->ptr = pt;
	precioadicional = 3000;
}

string MonitoreoCardiaco::tostring()
{
	stringstream s;
	s<<this->ptr->tostring();
	s << "MonitoreoCardiaco ---" << precioadicional << endl;;

	return s.str();
}

float MonitoreoCardiaco::costo()
{
	return precioadicional + this->getptr()->costo();;
}

Componente* MonitoreoCardiaco::getptr()
{
	return this->ptr;
}

void MonitoreoCardiaco::setComponente(Componente* m)
{
	this->ptr = m;
}
