#pragma once
#include"Decorador.h"


class Internet :public Decorador
{
private:
	float precioadicional;
	Componente* ptr;
public:
	Internet(Componente*);

	virtual string tostring();
	virtual float costo();
	virtual Componente* getptr();
	virtual void setComponente(Componente*);



};

