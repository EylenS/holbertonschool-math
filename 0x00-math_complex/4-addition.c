#include "holberton.h"

/**
 * addition - Performs the addition between complex numbers.
 * @c1: First complex number.
 * @c2: Second complex number.
 * @c3: complex number after the sum.
 */
void addition(complex c1, complex c2, complex *c3)
{
	double a, b;

	a = c1.re + c2.re; /* The sum of real numbers */
	b = c1.im + c2.im; /* The sum of imaginary numbers */
	c3->re = a;		   /* according 2 the struct, value is assigned */
	c3->im = b;		   /* 2 the real & imaginary part */
}
