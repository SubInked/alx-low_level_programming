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
	int valOfBit = -1;
	unsigned int a = 0;


	if (index > 63)
		return (-1);

	while (a <= index)
	{
		if (a == index)
			valOfBit = n & 1;

		n >>= 1;
		a++;
	}

	return (valOfBit);
}
