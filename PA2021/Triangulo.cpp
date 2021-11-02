#include "pch.h"
#include "Triangulo.h"

Triangulo::Triangulo(int lado)
{
	Lado = lado;
	Tipo = "Triangulo";
}

double Triangulo::CalcularArea()
{
	return (Lado ^ 2) / 2;
}

double Triangulo::CalcularPerimetro()
{
	return Lado * 3;
}