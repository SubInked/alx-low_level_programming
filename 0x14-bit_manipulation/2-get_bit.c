#include "main.h"


/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to search
 * @index: index of the bit
 *
 * Return: the value of the bit
 */


int get_bit(unsigned long int n, unsigned int index)
{
	int bitValue = -1;
	unsigned int i = 0;


	if (index > 63)
		return (-1);

	while (i <= index)
	{
		if (i == index)
			bitValue = n & 1;

		n >>= 1;
		i++;
	}

	return (bitValue);
}

