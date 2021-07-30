#include <stdio.h>
#include "holberton.h"

/**
 * display_complex_number - function that displays the complex numbers
 * @c: The alias
 *
 * Return: The complex number
 */
void display_complex_number(complex c)
{
	if (c.im == 0)
		printf("%.f\n", c.re);
	else
		printf("%.f + %.fi\n", c.re, c.im);
}
