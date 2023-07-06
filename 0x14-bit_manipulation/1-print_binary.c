#include "main.h"

/**
 * print_binary - Prints the binary equivalent
 * of decimal number
 * @n: number to print in binary
 */


void print_binary(unsigned long int n)
{
	int i;
	int j = 0;
	unsigned long int k = 1;


	i = 0;
	while ((n >> i) > 0)
		i++;
	i--;

	for (; i >= 0; i--)
	{
		if (n & (k << i))
		{
			_putchar('1');
			j++;
		}

		else if (j > 0)
			_putchar('0');
	}

	if (j == 0)
		_putchar('0');
}
