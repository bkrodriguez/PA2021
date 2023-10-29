#include "pch.h"
#include "Cola.h"

void Cola::EnColar(int valor)
{
	NodoSimple^ Nuevo = gcnew NodoSimple();
	Nuevo->Valor = valor;
	if (Cabeza == nullptr)
	{
		Cabeza = Nuevo;
		Cola = Nuevo;
	}
	else
	{
		Cola->Siguiente = Nuevo;
		Cola = Nuevo;
	}
}

int Cola::DesEnColar()
{
	int Retorno = -9999;
	if (Cabeza != nullptr)
	{
		Retorno = Cabeza->Valor;
		NodoSimple^ Top = Cabeza;
		Cabeza = Cabeza->Siguiente;
		if (Cabeza == nullptr)
			Cola = nullptr;
		delete(Top);

	}
	return Retorno;
}

int Cola::Tamano()
{
	int Cantidad = 0;
	for (NodoSimple^ i = Cabeza; i != nullptr; i = i->Siguiente)
	{
		Cantidad++;
	}
	return Cantidad;
}

bool Cola::ColaVacia()
{
	return Cabeza == nullptr;
}

void Cola::Limpiar()
{
	while (!ColaVacia())
	{
		DesEnColar();
	}
}

int Cola::Top()
{
	if (ColaVacia())
		return -1;
	else
		return Cabeza->Valor;
}