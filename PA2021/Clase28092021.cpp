#include "pch.h"
#include "Clase28092021.h"

using namespace System;

void  Clase28092021::Palindromo()
{
    Cola^ MiCola = gcnew Cola();
    Pila^ MiPila = gcnew Pila();
    String^ Palabra = Console::ReadLine();
    for (int i = 0; i < Palabra->Length; i++)
    {
        MiCola->EnColar(Palabra[i]);
        MiPila->Insertar(Palabra[i]);
    }
    bool Palindromo = true;
    while (!MiCola->ColaVacia())
    {
        if (MiPila->Quitar() != MiCola->DesEnColar())
            Palindromo = false;
    }
    if (Palindromo)
        Console::WriteLine("Palindromo");
    else
        Console::WriteLine("No es Palindromo");
}


void Clase28092021::NumerosAleatoreos()
{
    Cola^ MiCola = gcnew Cola();
    Cola^ Negativos = gcnew Cola();
    Random Rnd;

    for (int i = 0; i < 100; i++)
        MiCola->EnColar(Rnd.Next(-25, 26));
    while (!MiCola->ColaVacia())
    {
        int Actual = MiCola->DesEnColar();
        if (Actual < 0)
            Negativos->EnColar(Actual);
    }
    while (!Negativos->ColaVacia())
        Console::WriteLine(Negativos->DesEnColar());

}

void Clase28092021::Imprimir()
{
    String^ Palabra = Console::ReadLine();
    Pila^ MiPila = gcnew Pila();
    for (int i = 0; i < Palabra->Length; i++)
    {
        Console::WriteLine(Palabra[i]);
        MiPila->Insertar(Palabra[i]);
    }
    Console::WriteLine("");
    while (!MiPila->PilaVacia())
        Console::WriteLine(Convert::ToChar(MiPila->Quitar()));
}       

void Clase28092021::AleatoreosPares()
{
    Cola^ Pares = gcnew Cola();
    Pila^ Impares = gcnew Pila();
    Pila^ MiPila = gcnew Pila();
    Random Rnd;

    for (int i = 0; i < 100; i++)
        MiPila->Insertar(Rnd.Next());

    while (!MiPila->PilaVacia())
    {
        int Actual = MiPila->Quitar();
        if (MiPila->Quitar() % 2 == 0)
            Pares->EnColar(Actual);
        else
            Impares->Insertar(Actual);
    }

    while (!Pares->ColaVacia())
        Console::WriteLine(Pares->DesEnColar());
    Console::WriteLine("");
    while (!Impares->PilaVacia())
        Console::WriteLine(Impares->Quitar());

}

void Clase28092021::Equilibrio()
{
    String^ Exp = Console::ReadLine();
    Pila^ Parentesis = gcnew Pila();
    Pila^ Corchetes = gcnew Pila();
    Pila^ Llaves = gcnew Pila();
    bool Resultado = true;
    for (int i = 0; i < Exp->Length; i++)
    {
        if (Exp[i] == '(')
            Parentesis->Insertar(Exp[i]);
        else if (Exp[i] == ')')
        {
            if (Parentesis->Quitar() == -99999)
                Resultado = false;
        }
        else if (Exp[i] == '{')
            Llaves->Insertar(Exp[i]);
        else if (Exp[i] == '}')
        {
            if (Llaves->Quitar() == -99999)
                Resultado = false;
        }
        else if (Exp[i] == '[')
            Corchetes->Insertar(Exp[i]);
        else if (Exp[i] == ']')
        {
            if (Corchetes->Quitar() == -99999)
                Resultado = false;
        }
    }

    if (!Parentesis->PilaVacia() || !Llaves->PilaVacia() || !Corchetes->PilaVacia())
        Resultado = false;

    if (Resultado)
        Console::WriteLine("Exp. equilibrada");
    else
        Console::WriteLine("Exp. no equilibrada");
}       