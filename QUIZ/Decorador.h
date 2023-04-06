#pragma once
#include"Componente.h"


class Decorador:public Componente
{
protected:
	float costoadicional;
public:
	virtual~Decorador();
	virtual string tostring() = 0;
	virtual float costo() = 0;
	virtual Componente* getptr() = 0;
	virtual void setComponente(Componente*) = 0;



};

