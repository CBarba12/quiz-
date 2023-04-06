#pragma once
#include"Decorador.h"

class MonitoreoCardiaco:public Decorador
{
private:
	float precioadicional;
	Componente* ptr;
public:
	MonitoreoCardiaco(Componente*);

	virtual string tostring() ;
	virtual float costo() ;
	virtual Componente* getptr() ;
	virtual void setComponente(Componente*) ;


};

