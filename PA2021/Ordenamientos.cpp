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

void Ordenamientos::Insertion(int valores[], int n) {
	int key, j;
	for (int i = 1; i < n; i++) {
		key = valores[i];
		j = i - 1;

		// Move elements of arr[0..i-1],
		// that are greater than key, 
		// to one position ahead of their
		// current position
		while (j >= 0 && valores[j] > key) {
			valores[j + 1] = valores[j];
			j = j - 1;
		}
		valores[j + 1] = key;
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

void Ordenamientos::Intercambio(int* a, int* b)
{
	int Temp = *a;
	*a = *b;
	*b = Temp;
}

int Ordenamientos::Particion(int valores[], int bajo, int alto)
{
	int Pivote = valores[alto];
	int i = bajo - 1;
	for (int j = bajo; j <= alto; j++)
	{
		if (valores[j] < Pivote)
		{
			i++;
			Intercambio(&valores[i], &valores[j]);
		}
	}
	Intercambio(&valores[i+1], &valores[alto]);
	return i + 1;
}

void Ordenamientos::QuickSort(int valores[], int bajo, int alto)
{
	if (bajo < alto)
	{
		int Pi = Particion(valores, bajo, alto);
		QuickSort(valores, bajo, Pi - 1);
		QuickSort(valores, Pi + 1, alto);
	}
	for (int i = bajo; i <= alto; i++)
	{
		Console::WriteLine(valores[i]);
	}
	Console::WriteLine("");
}


bool Ordenamientos::EstaOrdenado(int valores[], int n)
{
	while (--n > 0)
	{
		if (valores[n] < valores[n - 1])
			return false;
	}
	return true;
}

void Ordenamientos::Shuffle(int valores[], int n)
{
	Random rnd; 
	for (int i = 0; i < n; i++)
	{
		Intercambio(&valores[i], &valores[rnd.Next(0, n)]);
	}
}

void Ordenamientos::BogoSort(int valores[], int n)
{
	while (!EstaOrdenado(valores, n))
	{
		Shuffle(valores, n);
	}
	for (int i = 0; i < n; i++)
	{
		Console::WriteLine(valores[i]);
	}

}