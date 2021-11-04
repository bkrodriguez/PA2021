#include "IPunto.h"
#pragma once
using namespace System;
ref class Punto : IPunto 
{
	int X, Y;
public: 
	virtual double Distance();
};

