#include "holberton.h"

/**
 * division - Performs the div. between complex numbers.
 * @c1: First complex number.
 * @c2: Second complex number.
 * @c3: Complex number after the division.
 */
void division(complex c1, complex c2, complex *c3)
{
	double a, b, d;

	d = (c2.re * c2.re) + (c2.im * c2.im); /* denominator */
	a = ((c1.re * c2.re) + (c1.im * c2.im)) / d; /* real part */
	b = ((c1.im * c2.re) - (c1.re * c2.im)) / d; /* imaginary part */
	c3->re = a;
	c3->im = b;
}
