#include "lists.h"

/**
 * print_listint - prints the elements of linked list
 * @h: linked list of the  type listint_t
 * to be printed
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	int num;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		 h = h->next;
	}
	num = count;

	return (num);
}
