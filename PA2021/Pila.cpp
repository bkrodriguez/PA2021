#include "pch.h"
#include "Pila.h"

Pila::Pila()
{
	Cabeza = nullptr;
}

Pila::Pila(int valor)
{
	Insertar(valor);
}

void Pila::Insertar(int valor)
{
	NodoSimple^ Nuevo = gcnew NodoSimple();
	Nuevo->Valor = valor;
	Nuevo->Siguiente = Cabeza;
	Cabeza = Nuevo;
}

int Pila::Quitar()
{
	if (Cabeza == nullptr)
		return -99999;
	int Retorno = Cabeza->Valor;
	NodoSimple^ Top = Cabeza;
	Cabeza = Cabeza->Siguiente;
	delete(Top);
	return Retorno;
}

bool Pila::PilaVacia()
{
	if (Cabeza == nullptr)
		return true;
	else
		return false;
}

void Pila::Limpiar()
{
	while(!PilaVacia())
	{
		Quitar();
	}
}

int Pila::Tamano()
{
	int Cantidad = 0;
	for (NodoSimple^ i = Cabeza; i != nullptr; i = i->Siguiente)
	{
		Cantidad++;
	}
	return Cantidad;
}

int Pila::Cima()
{
	if (Tamano() == 0)
		return -9999;
	return Cabeza->Valor;
}
