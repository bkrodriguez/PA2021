#pragma once
#include "Figura.h"
ref class Cuadrado :
    public Figura
{
protected:
    int Lado;
public:
    Cuadrado();
    Cuadrado(int lado);
    double CalcularArea();
    double CalcularPerimetro();
};

