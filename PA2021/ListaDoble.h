#include "NodoDoble.h"

#pragma once
ref class ListaDoble
{

	NodoDoble^ Cabeza;
public:
	void InsertarNuevo(int valor);
	void InsertarNuevo(int valor, int indice);
	int Buscar(int valor);
	bool Eliminar(int valor);
};

