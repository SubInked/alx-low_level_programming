#include "main.h"

int rec_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - function to return natural square root
 * @n: number we are to calculate the square root of
 *
 * Return: the resulting square root
 */


int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (rec_sqrt_recursion(n, 0));
}

/**
 * rec_sqrt_recursion - function recuring to find
 * the natural square root of a number
 *
 * @n: number we are to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */


int rec_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (rec_sqrt_recursion(n, i + 1));
}
