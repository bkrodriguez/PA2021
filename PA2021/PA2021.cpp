#include "pch.h"
#include "Recursividad.h"
#include "Parcial1.h"
#include "ListaSimple.h"
#include "ListaDoble.h"
#include "Pila.h"
#include "Cola.h"
#include "Clase28092021.h"
#include "Ordenamientos.h"

using namespace System;

int main(array<System::String^>^ args)
{
    int Valores[] = {50, 20, 30, 80, 40};
    Ordenamientos^ Obj = gcnew Ordenamientos();
    Obj->Shell(Valores, 5);
    Console::ReadKey();
    return 0;
}

