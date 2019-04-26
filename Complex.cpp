
#include "Complex.h"

Complex z3;

void Complex::plus(Complex z1, Complex z2)
{
	z3.real = z1.real + z2.real;
	z3.imag = z1.imag + z2.imag;
	cout << z3.real << "+i*" << z3.imag;
}
void Complex::minus(Complex z1, Complex z2)
{
	z3.real = z1.real - z2.real;
	z3.imag -= z1.imag - z2.imag;
	cout << z3.real << "-i*" << z3.imag;
}
void Complex::um(Complex z1, Complex z2)
{
	z3.real = (z1.real + z2.real) * (z1.imag + z2.imag);
	z3.imag = (z1.real + z2.imag) * (z1.real + z2.imag);
	cout << z3.real << "*i*" << z3.imag;
}
void Complex::del(Complex z1, Complex z2)
{
	z3.real = (z1.real * z2.real + z1.imag * z2.imag) / (z1.real * z2.real + z1.imag * z2.imag);
	z3.imag = (z1.imag * z2.real - z1.real * z2.imag) / (z1.real * z2.real + z2.imag * z2.imag);
	cout << z3.real << "/i*" << z3.imag;
}
double Complex::abs()
{
	return sqrt(real * real + imag * imag);
}