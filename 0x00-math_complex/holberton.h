#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/*Libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*structs*/
/**
 * struct comp - store data both real and imaginary numbers
 * @re: real number
 * @im: imaginary number
 *
 * Return: The complex number
 */
typedef struct comp
{
	double re;
	double im; /*var holding real & imaginary part of type double*/
} complex;

/*Prototypes*/
void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
#endif
