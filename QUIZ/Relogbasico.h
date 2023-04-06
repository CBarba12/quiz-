#pragma once
#include"Componente.h"

class Relogbasico:public Componente
{
private:
	float precio;

public:
	Relogbasico();
	virtual string tostring() ;
	virtual float costo() ;
	virtual Componente* getptr() ;
	virtual void setComponente(Componente*) ;
	
	



};

