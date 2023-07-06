#include <main.h>

/**
 * print_binary - Prints the binary equivalent
 * of decimal number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
={
	unsigned long int j = 1UL << (sizeof(unsigned long int) * 8 - 1);

	int i = 1;

	while (j > 0) 
	{
		if ((n & j) == j)
		{
			i = 0;
			_putchar('1');
		}
		else if (!i) 
		{
			_putchar('0');
		}
        j >>= 1;
	}

	if (i) 
	{
		_putchar('0');
	}
}
