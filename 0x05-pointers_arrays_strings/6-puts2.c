#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */


void puts2(char *str)
{
	char *a = str
	int b = 0;
	int c = 0;
	int d;

	while (*a != '\0')
	{
		a++;
		b++;
	}
	t = b - 1;
	for (d = 0 ; d <= c ; d++)
	{
		if (d % 2 == 0)
	{
		_putchar(str[d]);
	}
	}
	_putchar('\n');
}

