#include "pch.h"
#include "Circulo.h"

Circulo::Circulo()
{
}

Circulo::Circulo(double radio)
{
	Radio = radio;
}

double Circulo::CalcularArea()
{
	
	return Math::PI * Math::Pow(Radio, 2);
}

double Circulo::CalcularPerimetro()
{
	return 2 * Math::PI * Radio;
}
