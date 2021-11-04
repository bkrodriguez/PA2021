#pragma once
#include "Cuadrado.h"
#include "Circulo.h"
ref class Triangulo :
    public Cuadrado 
{
public:
    Triangulo(int lado);
    double CalcularArea() override;
    double CalcularPerimetro() override;
};

