#include <stdio.h>

/**
 * print_listint - prints the elements of linked list
 * @head: linked list of the  type listint_t
 * to be printed
 *
 * Return: number of nodes
 */


size_t print_listint(const struct listint *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		count++;
		 head = head->next;
	}
	return (count);
}
