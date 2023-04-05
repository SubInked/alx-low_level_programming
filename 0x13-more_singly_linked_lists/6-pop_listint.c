#include "lists.h"

/**
 * pop_listint - Deletes the head node of
 * listint_t linked list and returns its data.
 *
 * @head: A pointer to a pointer to head of list.
 *
 * Return: The data of head node
 * that was deleted, or 0 if the list is empty.
*/


int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;


	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
