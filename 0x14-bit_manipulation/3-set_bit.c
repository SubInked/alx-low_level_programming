#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	unsigned long int a = 1;
	unsigned int i = 0;


	while (i < index)
	{
		a <<= 1;
		i++;
	}

	*n |= a;
	return (1);
}
