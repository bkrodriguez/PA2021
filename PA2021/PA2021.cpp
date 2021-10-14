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
    int Valores[] = {50, 20, 30, 80, 40};
    Busqueda^ Obj = gcnew Busqueda();
    
    Obj->InsertarHashDinamico(1);
    Obj->InsertarHashDinamico(101);
    Obj->InsertarHashDinamico(201);
    Obj->InsertarHashDinamico(320);
    int Pos;
    int Indice = Obj->BusquedaHashDinamico(1, Pos);
    Console::WriteLine(Indice);
    Console::WriteLine(Pos);
    Console::ReadKey();
    return 0;
}

