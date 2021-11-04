#pragma once
#include "Figura.h"
#include "Persona.h"
ref class Cuadrado :
    public Figura
{
protected:
    int Lado;
public:
    Cuadrado();
    Cuadrado(int lado);
    double CalcularArea() override;
    double CalcularPerimetro() override;
};

