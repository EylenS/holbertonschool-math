#include "holberton.h"

/**
 * modulus - Returns the modulus of a given complex number
 * @c: the estructure
 *
 * Return: the modulus
 */
double modulus(complex c)
{
	double p_real, p_imag;
	double r; /* modulus */
	double pow_r_i;
	double p = 2.0;

	p_real = pow(c.re, p);
	p_imag = pow(c.im, p);
	pow_r_i = p_real + p_imag;
	r = sqrt(pow_r_i);
	return (r);
}
