#include "NodoSimple.h"
#pragma once

using namespace System;

ref class ListaSimple
{

	NodoSimple^ Cabeza;
public:
	void InsertarNuevo(int valor);
	/// <summary>
	/// Reemplaza el ultimo puntero en LISTAS CIRCULARES
	/// </summary>
	/// <param name="NuevoNodo">Nuevo nodo a insertar</param>	
	void ReemplazaUltimo(NodoSimple^ NuevoNodo);
	void InsertarNuevo(int valor, int index);
	int Buscar(int valor);
	bool Eliminar(int valor);
	

};

