#include "pch.h"
#include "Personal.h"

Personal::Personal(String^ codigo, String^ nombre, String^ direccion, String^ fechaNacimiento, String^ genero)
	: Persona(nombre, direccion, fechaNacimiento, genero)
{
	Codigo = codigo;
}