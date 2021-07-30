#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/*Libraries*/
#include <stdio.h>
#include <stdlib.h>

/*structs*/
typedef struct
{
	double re;
	double im; /*var holding real & imaginary part of type double*/
} complex;

/*Prototypes*/
void display_complex_number(complex c);
#endif
