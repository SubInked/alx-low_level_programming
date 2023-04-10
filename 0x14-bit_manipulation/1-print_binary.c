#include "main.h"

/**
 * print_binary - Prints the binary equivalent
 * ofdecimal number
 * @n: number to print in binary
 */


void print_binary(unsigned long int n)
{
	int i;
	int a = 0;
	unsigned long int b = 1;


	i = 0;
	while ((n >> i) > 0)
		i++;
	i--;

	for (; i >= 0; i--)
	{
		if (n & (b << i)
		{
			_putchar('1');
			a++;
		}

		else if (a > 0)
			_putchar('0');
	}

	if (a == 0)
		_putchar('0');
}
