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
		printf("%g\n", c.re);
	else
	{
		if (c.im < 0)
			printf("%g - %gi\n", c.re, -c.im);
		else
			printf("%g + %gi\n", c.re, c.im);
	}
}
