#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: head of the listint_t list
 * Description: The function sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *new;

	if (head == NULL)
		return;
	while (*head)
	{
		new = (*head)->next;
		free(*head);
		*head = new;
	}
	head = NULL;
}
