#include "ListaSimple.h"
#pragma once
ref class Busqueda
{
public: 
	array<int, 1>^ HashSimple = gcnew array<int, 1>(100);
	array<ListaSimple^, 1>^ Hash = gcnew array<ListaSimple^, 1>(100);
	int Secuencial(int valores[], int n, int x);
	int Binario(int valores[], int bajo, int alto, int x);
	int Binario(int valores[], int n, int x);
	int InsertaHash(int value);
	int BusquedaHash(int value);
	int InsertarHashDinamico(int value);
	int BusquedaHashDinamico(int value, int& pos);
};

