#include "NodoSimple.h"
#pragma once
ref class Pila
{
	NodoSimple^ Cabeza;
public:
	void Insertar(int valor);
	int Quitar();
	bool PilaVacia();
	void Limpiar();
	int Tamano();
	int Cima();
};

