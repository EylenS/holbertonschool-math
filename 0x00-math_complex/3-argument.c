#include "holberton.h"

/**
 * argument - Returns the argument of a given complex number
 * @c: the complex number
 *
 * Return: the argument
 */
double argument(complex c)
{
	double angle;
	double div;

	div = c.im / c.re;
	angle = atan(div);
	if (c.re > 0 && c.im > 0)
		return (angle);
	else if (c.re < 0 && c.im > 0)
		return (PI - angle);
	else if (c.re > 0 && c.im < 0)
		return (angle * (-1));
	else
		return ((-1) * (PI - angle));
}
