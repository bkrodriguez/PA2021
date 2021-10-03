#include "pch.h"
#include "ListaSimple.h"

void ListaSimple::InsertarNuevo(int valor)
{
	NodoSimple^ Nuevo = gcnew NodoSimple();
	Nuevo->Valor = valor;
	Nuevo->Siguiente = Cabeza;
	//Solo si es una lista circular 
	ReemplazaUltimo(Nuevo);
	Cabeza = Nuevo;
}

/// <summary>
/// Reemplaza el ultimo puntero en LISTAS CIRCULARES
/// </summary>
/// <param name="NuevoNodo">Nuevo nodo a insertar</param>	
void ListaSimple::ReemplazaUltimo(NodoSimple^ NuevoNodo)
{
	if (Cabeza == nullptr)
		NuevoNodo->Siguiente = NuevoNodo;
	else if(Cabeza->Siguiente == Cabeza)
	{
		Cabeza->Siguiente = NuevoNodo;
	}
	else
		for (NodoSimple^ pos = Cabeza->Siguiente; pos != Cabeza; pos = pos->Siguiente)
		{
			if (pos->Siguiente == Cabeza)
			{
				pos->Siguiente = NuevoNodo;
				return;
			}
		}
}

void ListaSimple::InsertarNuevo(int valor, int index)
{
	if (index == 0)
	{
		InsertarNuevo(valor);
	}
	else {
		NodoSimple^ Nuevo = gcnew NodoSimple();
		Nuevo->Valor = valor;
		int PosicionActual = 0;
		NodoSimple^ NodoActual = Cabeza;
		NodoSimple^ NodoAnterior = Cabeza;
		while (PosicionActual < index)
		{
			NodoAnterior = NodoActual;
			NodoActual = NodoActual->Siguiente;
			PosicionActual++;
		}
		Nuevo->Siguiente = NodoActual;
		NodoAnterior->Siguiente = Nuevo;
	}
}

int ListaSimple::Buscar(int valor)
{
	int count = 0;
	for (NodoSimple^ indice = Cabeza; indice != nullptr; indice = indice->Siguiente)
	{
		if (indice->Valor == valor)
			return count;
		count++;
	}
	return -1; 
}

bool ListaSimple::Eliminar(int valor)
{
	NodoSimple^ Actual = Cabeza;
	int Indice = Buscar(valor);
	if (Indice == -1)
		return false;
	else if (Indice == 0)
		Cabeza = Cabeza->Siguiente;
	else
	{
		NodoSimple^ Anterior = Cabeza;
		for (int i=0; i < Indice; i++)
		{
			Anterior = Actual;
			Actual = Actual->Siguiente;	
		}
		Anterior->Siguiente = Actual->Siguiente;
	}
	//Libera la memoria del elemento a eliminar
	delete(Actual);
	return true;
}