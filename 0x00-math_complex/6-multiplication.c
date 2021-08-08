#include "holberton.h"

/**
 * multiplication - Performs the mult. between complex numbers.
 * @c1: First complex number.
 * @c2: Second complex number.
 * @c3: Complex number after the multiplication.
 */
void multiplication(complex c1, complex c2, complex *c3)
{
	double a, b;

	a = (c1.re * c2.re) + (c1.im * c2.im * (-1)); /* pow(i, 2) = -1 */
	b = (c1.re * c2.im) + (c1.im * c2.re);        /* The calc. of imaginary numbers */
	c3->re = a;                                   /* according 2 the struct, value is assigned */
	c3->im = b;                                   /* 2 the real & imaginary part */
}
