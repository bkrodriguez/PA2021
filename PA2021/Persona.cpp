#include "pch.h"
#include "Persona.h"

Persona::Persona(String^ nombre, String^ direccion, String^ fechaNacimiento, String^ genero)
{
	Nombre = nombre;
	Direccion = direccion;
	FechaNacimiento = fechaNacimiento;
	Genero = genero;
}