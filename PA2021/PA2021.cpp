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

using namespace System;

int main(array<System::String^>^ args)
{
    Pila^ Numeros = gcnew Pila();
    Cola^ Pares = gcnew Cola();
    Pila^ Impares = gcnew Pila();
    int Ingreso = -1;
    do {
        Ingreso = Convert::ToInt32(Console::ReadLine());
        if (Ingreso != -1)
        {
            Numeros->Insertar(Ingreso);
        }
    } while (Ingreso != -1);
    
    while (!Numeros->PilaVacia())
    {
        int Valor = Numeros->Quitar();
        if (Valor % 2 == 0)
            Pares->EnColar(Valor);
        else
            Impares->Insertar(Valor);
    }


    Console::ReadKey();
    return 0;
}

