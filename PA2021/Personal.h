using namespace System;
#pragma once
#include "Persona.h"
ref class Personal :
    public Persona
{
    String^ Codigo;
public:
    Personal(String^ codigo, String^ nombre, String^ direccion, String^ fechaNacimiento, String^ genero);
};

