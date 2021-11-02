#pragma once
#include "Figura.h"
using namespace System;
ref class Circulo :
    public Figura
{
    double Radio;
public:
    Circulo(double radio);
    double CalcularArea();
    double CalcularPerimetro();
};

