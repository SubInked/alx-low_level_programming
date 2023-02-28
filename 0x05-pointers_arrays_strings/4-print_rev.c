#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: string
 * Return: 0
 */


void print_rev(char *s)
{
	int stringLen = 0;
	int a;

	while (*s != '\0')
	{
		stringLen++;
		s++;
	}
	s--;
	for (a = stringLen; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

