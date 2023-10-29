#include "NodoSimple.h"
#pragma once

using namespace System;

ref class ListaSimple
{

	NodoSimple^ Cabeza;
public:
	void InsertarNuevo(int valor);	
	void ReemplazaUltimo(NodoSimple^ NuevoNodo);
	void InsertarNuevo(int valor, int index);
	int Buscar(int valor);
	int BuscarIndice(int indice);
	bool Eliminar(int valor);
	

};

