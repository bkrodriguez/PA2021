using namespace::System;
#pragma once
ref  class Figura
{
protected:
	String^ Tipo;
public:
	virtual double CalcularArea() = 0;
	virtual double CalcularPerimetro() = 0;
};

