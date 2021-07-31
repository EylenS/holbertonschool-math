#include "holberton.h"

/**
 * complex_conjugate - Calculate the conjugate of the complex number
 * @c: The alias
 *
 * Return: The complex number
 */
complex conjugate(complex c)
{
	c.im = c.im * (-1);
	return (c);
}
