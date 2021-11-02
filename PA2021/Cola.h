#include "NodoSimple.h"
#pragma once
ref class Cola
{
	NodoSimple^ Cabeza;
	NodoSimple^ Cola;
public: 
	void EnColar(int valor);
	int DesEnColar();
	int Tamano();
	bool ColaVacia();
	void Limpiar();
	int Top();
};

