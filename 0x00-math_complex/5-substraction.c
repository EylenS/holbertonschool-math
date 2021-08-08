#include "holberton.h"

/**
 * substraction - Performs the substraction between complex numbers.
 * @c1: First complex number.
 * @c2: Second complex number.
 * @c3: Complex number after the substraction.
 */
void substraction(complex c1, complex c2, complex *c3)
{
	double a, b;

	a = c1.re - c2.re; /* The sub. of real numbers */
	b = c1.im - c2.im; /* The sub. of imaginary numbers */
	c3->re = a;        /* according 2 the struct, value is assigned */
	c3->im = b;        /* 2 the real & imaginary part */
}
