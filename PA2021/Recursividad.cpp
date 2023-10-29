#include "pch.h"
#include "Recursividad.h"
using namespace System;


void Recursividad::semanticaValorReferencia(int valor, int& referencia)
{
    valor = 1;
    referencia = 1;
}

/*RECURSIVIDAD DIRECTA
  0 1 2 3 4 5 6 7  8
0 1 1 2 3 5 8 13 21......
*/
int Recursividad::Fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return Fibonacci(n - 1) + Fibonacci(n - 2);
}
/*EJEMPLO
     259 % 10 = 9
     259 / 10 = 25
     25 % 10 = 5
     25 / 10 = 2
     2 <= 9  VALOR BASE
*/

int Recursividad::SumaDigitos(int n)
{
    if (n <= 9)
        return n;
    else
        return SumaDigitos(n / 10) + n % 10;
}

int Recursividad::MCD(int dividendo, int divisor)
{
    if (dividendo % divisor == 0)
        return divisor;
    else
        return MCD(divisor, dividendo % divisor);
}


//RECURSIVIDAD INDIRECTA
void Recursividad::MetodoA(char c)
{
    if (c > 'A')
         MetodoB(c);
    Console::WriteLine(c);
}

void Recursividad::MetodoB(char c)
{
    MetodoA(--c);
}



int Recursividad::Impar(int n)
{
    if (n == 0)
        return 0;
    else
        return Par(n - 1);
}

int Recursividad::Par(int n)
{
    if (n == 0)
        return 1;
    else
        return Impar(n - 1);
}