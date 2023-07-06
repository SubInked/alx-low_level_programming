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
	unsigned long int i = n ^ m;
	unsigned int j = 0;


	while (i != 0)
	{
		if (i & 1)
			j++;

		i = i >> 1;
	}


	return (j);
}

