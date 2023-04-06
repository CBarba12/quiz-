#include "Relogbasico.h"



Relogbasico::Relogbasico()
{
	precio = 30000;
}

string Relogbasico::tostring()
{
	stringstream s;
	s << "Relog basico" <<this->precio<< endl;
	return s.str();
}

float Relogbasico::costo()
{
	return precio;
}

Componente* Relogbasico::getptr()
{
	return nullptr;
}

void Relogbasico::setComponente(Componente*)
{
}
