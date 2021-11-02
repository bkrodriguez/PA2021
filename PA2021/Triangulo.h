#pragma once
#include "Cuadrado.h"
ref class Triangulo :
    public Cuadrado
{
public:
    Triangulo(int lado);
    double CalcularArea();
    double CalcularPerimetro();
};

