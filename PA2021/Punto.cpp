#include "pch.h"
#include "Punto.h"

double Punto::Distance()
{
	return Math::Sqrt(X * X + Y * Y);
}