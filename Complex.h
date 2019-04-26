#pragma once

#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

class Complex
{
public:
	double real;
	double imag;
	void plus(Complex z1, Complex z2);
	void minus(Complex z1, Complex z2);
	void um(Complex z1, Complex z2);
	void del(Complex z1, Complex z2);
	double abs();

};

#endif // COMPLEX_H
