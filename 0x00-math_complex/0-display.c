#include "holberton.h"

/**
 * display_complex_number - function that displays the complex numbers
 * @c: The alias
 *
 * Return: The complex number
 */
void display_complex_number(complex c)
{
	if (c.im == 0) /* num im = 0 */
		printf("%f\n", c.re);
	else if (c.re == 0) /* Only print imagynary number*/
		printf("%fi\n", c.im);
	else if (c.im == -1) /*print only im*/
		printf("%f - i\n", c.re);
	else if (c.im < -1) /* imaginary is a negative number */
		c.im = c.im * -1;
		printf("%f - %fi\n", c.re, c.im);
	else if (c.im == 1)
		printf("%f + i\n", c.re);
	else
		printf("%f + %fi\n", c.re, c.im);
}
