#pragma once

#include"Decorador.h"

class Radio :public Decorador
{
private:
	float precioadicional;
	Componente* ptr;
public:
	Radio(Componente*);

	virtual ~Radio();


	virtual string tostring();
	virtual float costo();
	virtual Componente* getptr();
	virtual void setComponente(Componente*);
};

