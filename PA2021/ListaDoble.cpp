#include "pch.h"
#include "ListaDoble.h"

void ListaDoble::InsertarNuevo(int valor)
{
	NodoDoble^ Nuevo = gcnew NodoDoble();
	Nuevo->Valor = valor;
	Nuevo->Siguiente = Cabeza;
	if(Cabeza != nullptr)
		Cabeza->Anterior = Nuevo;
	Cabeza = Nuevo;
}

void ListaDoble::InsertarNuevo(int valor, int indice)
{
	if (indice == 0)
		InsertarNuevo(valor);
	else
	{
		NodoDoble^ Nuevo = gcnew NodoDoble();
		Nuevo->Valor = valor;
		int PosicionActual = 0;
		NodoDoble^ NodoActual = Cabeza;
		while (PosicionActual < indice)
		{
			NodoActual = NodoActual->Siguiente;
			PosicionActual++;
		}
		Nuevo->Siguiente = NodoActual;
		NodoActual->Anterior->Siguiente = Nuevo;
		Nuevo->Anterior = NodoActual->Anterior;
		if(Nuevo->Siguiente != nullptr)
			Nuevo->Siguiente->Anterior = Nuevo;

	}
}

int ListaDoble::Buscar(int valor)
{
	int count = 0;
	for (NodoDoble^ indice = Cabeza; indice != nullptr; indice = indice->Siguiente)
	{
		if (indice->Valor == valor)
			return count;
		count++;
	}
	return -1;
}

bool ListaDoble::Eliminar(int valor)
{
	NodoDoble^ Actual = Cabeza;
	int Indice = Buscar(valor);
	if (Indice == -1)
		return false;
	else if (Indice == 0)
	{
		Actual = Cabeza;
		Cabeza->Siguiente->Anterior = nullptr;
		Cabeza = Cabeza->Siguiente;
	}
	else
	{
		for (int i = 0; i < Indice; i++)
		{
			Actual = Actual->Siguiente;
		}
		Actual->Anterior->Siguiente = Actual->Siguiente;
		Actual->Siguiente->Anterior = Actual->Anterior;
	}
	//Libera la memoria del elemento a eliminar
	delete(Actual);
	return true;
}