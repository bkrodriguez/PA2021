#include "pch.h"
#include "Parcial1.h"
///*
//Escribir un programa que lea una cadena de hasta diez caracteres que representa a un 
//número en numeración romana e imprima el formato de número romano y su equivalente en
//numeración arábiga.Los caracteres romanos y sus equivalentes son :

//M = 1000
//D = 500
//C = 100
//L = 50
//X = 10
//V = 5
//I = 1
//  LXXXVI (86), CCCXIX (319), MCCLIV (1254)
///

int Parcial1::Romanos(String^ romano)
{
	if (romano->Length == 1)
		return DigitoRomano(romano);
	else
	{
		if(DigitoRomano(romano->Substring(0, 1)) < DigitoRomano(romano->Substring(1, 1)))
			return Romanos(romano->Substring(1)) - DigitoRomano(romano->Substring(0, 1));
		else
			return Romanos(romano->Substring(1)) + DigitoRomano(romano->Substring(0, 1));
	}
}

int Parcial1::DigitoRomano(String^ romano)
{
	if (romano == "I")
		return 1;
	else if (romano == "V")
		return 5;
	else if (romano == "X")
		return 10;
	else if (romano == "L")
		return 50;
	else if (romano == "C")
		return 100;
	else if (romano == "D")
		return 500;
	else if (romano == "M")
		return 1000;
	else
		return 0;
}


//Construya una función que convierta un número decimal en una cadena que represente el valor 
//del número en hexadecimal.
//65029 Mod 16 = 5
//65029 Div 16 = 4064
//4064 Mod 16 = 0
//4064 Div 16 = 254
//254 Mod 16 = 14 = E
//254 Div 16 = 15 = F
//Resultado: FE05
String^ Parcial1::Hexadecimal(int decimal)
{   
	int div = decimal / 16;
	int mod = decimal % 16;
	if (div < 16)
		return DigitoHexadecimal(div) + DigitoHexadecimal(mod);
	else
		return  Hexadecimal(div) + DigitoHexadecimal(mod);
}

String^ Parcial1::DigitoHexadecimal(int decimal)
{
	switch (decimal)
	{
	case 0:
		return "0";
		break;
	case 1:
		return "1";
		break;
	case 2:
		return "2";
		break;
	case 3:
		return "3";
		break;
	case 4:
		return "4";
		break;
	case 5:
		return "5";
		break;
	case 6:
		return "6";
		break;
	case 7:
		return "7";
		break;
	case 8:
		return "8";
		break;
	case 9:
		return "9";
		break;
	case 10:
		return "A";
		break;
	case 11:
		return "B";
		break;
	case 12:
		return "C";
		break;
	case 13:
		return "D";
		break;
	case 14:
		return "E";
		break;
	case 15:
		return "F";
		break;
	default:
		return "";
		break;
	}
}



