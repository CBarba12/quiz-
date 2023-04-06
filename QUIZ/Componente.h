#pragma once
#include<iostream>
#include<sstream>

using namespace std;

class Componente
{
public:

	virtual string tostring()=0;
	virtual float costo() = 0;
	virtual Componente* getptr() = 0;
	virtual void setComponente(Componente*)=0;



};

