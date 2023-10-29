#include "pch.h"
#include "Recursividad.h"
#include "Parcial1.h"
#include "ListaSimple.h"
#include "ListaDoble.h"
#include "Pila.h"
#include "Cola.h"
#include "Clase28092021.h"
#include "Ordenamientos.h"
#include "Busqueda.h"
#include "Circulo.h"

using namespace System;

void f(int num, int div)
{
    if (num > 1)
    {
        if (num % div == 0)
        {
            Console::WriteLine(div);
            f(num / div, div);
        }
        else
        {
            f(num, div + 1);
        }
    }
}

int f2(int x)
{
    if (x > 100)
    {
        return(x - 10);
    }
    else
    {
        return (f2(f2(x + 11)));
    }
}

int main(array<System::String^>^ args)
{
    
    int arr[6] = { 10, 3, 4, 6, 8, 9 };
    Ordenamientos^ miObjetoOrden = gcnew Ordenamientos();
    miObjetoOrden->Burbuja(arr, 6);
    Busqueda^ miObjeto = gcnew Busqueda();
    Console::WriteLine(miObjeto->Binario(arr, 6, 8));
    Console::Read();
  
}

