#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: double pointer
 * @index: index of the node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int c;
	listint_t *new, *start;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		start = (*head)->next;
		free(*head);
		*head = start;
		return (1);
	}
	new = *head;
	for (c = 0; c < index - 1; c++)
	{
		if (new->next == NULL)
			return (-1);
		new = new->next;
	}
	start = new->next;
	new->next = start->next;
	free(start);
	return (1);
}
