#include <stdio.h>
/**
 * main - a programme that prints sizes of various computer types
 * Return: 0 (code is successful)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a int: %zu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %zu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %zu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
