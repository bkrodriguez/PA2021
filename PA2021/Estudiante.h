using namespace System;
#pragma once
#include "Persona.h"
ref class Estudiante :
    public Persona
{
    String^ Carnet;
public:
    Estudiante(String^ carnet, String^ nombre, String^ direccion, String^ fechaNacimiento, String^ genero);

};

