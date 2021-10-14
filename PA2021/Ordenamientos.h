#pragma once
ref class Ordenamientos
{
public:
	void Burbuja(int valores[], int n);
	void BurbujaV2(int valores[], int n);
	void Selection(int valores[], int n);
	void Shell(int valores[], int n);
	void Intercambio(int* a, int* b);
	int Particion(int valores[], int bajo, int alto);
	void QuickSort(int valores[], int bajo, int alto);
	bool EstaOrdenado(int valores[], int n);
	void Shuffle(int valores[], int n);
	void BogoSort(int valores[], int  n);
};

