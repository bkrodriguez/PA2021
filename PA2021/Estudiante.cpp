#include "pch.h"
#include "Estudiante.h"

Estudiante::Estudiante(String^ carnet, String^ nombre, String^ direccion, String^ fechaNacimiento, String^ genero) 
	: Persona(nombre, direccion, fechaNacimiento, genero)
{
	Carnet = carnet;
}