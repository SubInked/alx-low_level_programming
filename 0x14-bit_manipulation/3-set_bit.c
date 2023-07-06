#include "main.h"

/**
 * set_bit - sets a bit at given index to 1
 * @n: pointer to the number to change
 * @index: index of bit being set to 1
 *
 * Return: 1 for success, -1 on failure
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	int i;

	(int i = (sizeof(unsigned long int) * 8) - 1);

	if (index > i)
		return (-1);

	*n |= (1 << index);
	return (1);
}
