#include "holberton.h"

/**
 * complex_from_mod_arg - Update the real & imag, by given its modulus and arg.
 * @m: modulus.
 * @arg: argument.
 * @c3: Complex number updated.
 */
void complex_from_mod_arg(double m, double arg, complex *c3)
{
	double a, b;

	a = m * cos(arg);
	b = m * sin(arg);
	c3->re = a;
	c3->im = b;
}
