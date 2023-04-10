#include "main.h"

/**
 * binary_to_uint - converts a binary number
 * to an unsigned int
 * @b: string containing binary number
 *
 * Return: the converted number
 */


unsigned int binary_to_uint(const char *b)
{
	int ind = 0;
	unsigned int deciValue = 0;

	if (!b)
	{
		return (0);
	}

	while (b[ind])
	{
		if (b[ind] < '0' || b[ind] > '1')
		{
			return (0);
		}

		deciValue = 2 * deciValue + (b[ind] - '0');
		ind++;
	}

	return (deciValue);
}

