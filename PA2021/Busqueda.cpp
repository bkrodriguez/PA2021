#include "pch.h"
#include "Busqueda.h"

using namespace System;

int Busqueda::Secuencial(int valores[], int n, int x)
{
	for (int i = 0;  i < n;  i++)
	{
		if (valores[i] == x)
		{
			return i;
		}
	}
	return -1;
}

int Busqueda::Binario(int valores[], int bajo, int alto, int x)
{
	if (bajo <= alto)
	{
		int Mid = bajo + (alto - bajo) / 2;
		if (valores[Mid] == x)
			return Mid;
		if (valores[Mid] > x)
			return Binario(valores, bajo, Mid - 1, x);
		
		return Binario(valores, Mid + 1, alto, x);
	}
	return -1;

}

int Busqueda::Binario(int valores[], int n, int x)
{
	int L = 0;
	int R = n - 1;
	while (L<=R)
	{
		int Mid = L + (R - L) / 2;
		if (valores[Mid] == x)
			return Mid;
		if (valores[Mid] > x)
			R = Mid - 1;
		else
			L = Mid + 1;
	}
	return -1;
}

int Busqueda::InsertaHash(int value)
{
	int Indice = value % 100;
	while (HashSimple[Indice] != 0 && Indice < 100)
		Indice++;
	HashSimple[Indice] = value;
	
	return Indice;
}

int Busqueda::BusquedaHash(int value)
{
	int Indice = value % 100;
	while (HashSimple[Indice] != value && Indice < 100)
	{
		Indice++;
	}

	if (HashSimple[Indice] == value)
		return Indice;
	else
		return -1;
}

int Busqueda::InsertarHashDinamico(int value)
{
	int Indice = value % 100;
	if (Hash[Indice] == nullptr)
		Hash[Indice] = gcnew ListaSimple();
	Hash[Indice]->InsertarNuevo(value);
	return Indice;
}

int Busqueda::BusquedaHashDinamico(int value, int& pos)
{
	int Indice = value % 100;
	if (Hash[Indice] == nullptr)
		return -1;
	int Pos = Hash[Indice]->Buscar(value);
	pos = Pos;
	if (pos == -1)
		return -1;
	return Indice;
}