#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets
 * head to NULL.
 *
 * @head: A pinter to the head of list.
 */


void free_listint2(listint_t **head)
{
	listint_t *current;


	if (head == NULL)
		return;

	if (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	*head = NULL;
}
