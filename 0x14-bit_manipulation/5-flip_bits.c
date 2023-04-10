#include "main.h"


/**
 * flip_bits - returns the number of bits you would
 * need to flip and get a number to another
 *
 * @n: the first number
 * @m: the  second number
 *
 * Return: the number of bits needed to flip
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n ^ m;
	unsigned int b = 0;


	while (a != 0)
	{
		if (a & 1)
			b++;

		a = a >> 1;
	}


	return (b);
}
