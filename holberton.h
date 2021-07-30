#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/*Libraries*/
#include <stdio.h>
#include <stdlib.h>

/*structs*/
/**
 * struct complex - store data both real and imaginary numbers
 * @re: real number
 * @im: imaginary number
 *
 * Return: The complex number
 */
typedef struct complex
{
	double re;
	double im; /*var holding real & imaginary part of type double*/
} c;

/*Prototypes*/
void display_complex_number(complex c);
#endif
