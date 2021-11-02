#include "pch.h"
#include "Cuadrado.h"

Cuadrado::Cuadrado()
{
}

Cuadrado::Cuadrado(int lado) {
	Lado = lado;
	Tipo = "Cuadrado";
}

double Cuadrado::CalcularArea()
{
	return Lado ^ 2;
}

double Cuadrado::CalcularPerimetro()
{
	return Lado * 4;
}