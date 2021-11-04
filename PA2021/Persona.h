using namespace System;
#pragma once
ref class Persona
{
protected:
	String^ Nombre;
	String^ Direccion;
	String^ FechaNacimiento;
	String^ Genero;

public: 
	Persona(String^ nombre, String^ direccion, String^ fechaNacimiento, String^ genero);
};

