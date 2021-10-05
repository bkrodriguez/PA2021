#include "pch.h"
#include "Ordenamientos.h"

using namespace System;

void Ordenamientos::Burbuja(int valores[], int n)
{
	for (int i = 0;  i < n;  i++)
	{
		for (int j = 0; j < n-i-1; j++)
		{
			if (valores[j] > valores[j + 1])
			{
				int aux = valores[j];
				valores[j] = valores[j + 1];
				valores[j + 1] = aux;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		Console::WriteLine(valores[i]);
	}
}

void Ordenamientos::BurbujaV2(int valores[], int n)
{
	int i = n - 1;
	int IndiceIntercambio;
	while (i > 0)
	{
		IndiceIntercambio = 0;
		for (int j = 0; j < i; j++)
		{
			if (valores[j] > valores[j + 1])
			{
				int aux = valores[j];
				valores[j] = valores[j + 1];
				valores[j + 1] = aux;
				IndiceIntercambio = j;
			}
		}
		i = IndiceIntercambio;
	}
	for (int i = 0; i < n; i++)
	{
		Console::WriteLine(valores[i]);
	}
}

void Ordenamientos::Selection(int valores[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		int min = i; 
		for (int j = i +1; j < n; j++)
		{
			if (valores[min] > valores[j])
				min = j;
		}

		int aux = valores[i];
		valores[i] = valores[min];
		valores[min] = aux;
	}
	for (int i = 0; i < n; i++)
	{
		Console::WriteLine(valores[i]);
	}
}

void Ordenamientos::Shell(int valores[], int n)
{
	for (int gap = n/2; gap > 0; gap /= 2)
	{
		for (int i = gap; i < n; i++)
		{
			int Temp = valores[i];
			int j;
			for (j = i; j >= gap && valores[j - gap] > Temp; j -= gap)
				valores[j] = valores[j - gap];
			valores[j] = Temp;
		}
	}
	for (int i = 0; i < n; i++)
	{
		Console::WriteLine(valores[i]);
	}
}