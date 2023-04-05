#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth
 * node of a listint_t linked list.
 *
 * @head: A pointer to head of list.
 * @index: The index of node to return,
 * starting at 0.
 *
 * Return: A pointer to the nth node of the list,
 * or NULL if node does not exist.
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;


	while (current != NULL)
	{
		if (i == index)
		{
			return current;
		}
		i++;
		current = current->next;
	}

	return NULL;
}
