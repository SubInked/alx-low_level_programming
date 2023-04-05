#include "lists.h"

/**
 * listint_len - returns the number of elements
 * in linked list
 * @h: pointer to the head of the linked list
 *
 * Return: number of nodes in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	int num;

	while (h != NULL)
	{
		count++;
	    h = h->next;
	}
	num = count;
	return (num);
}
