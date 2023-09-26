#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: head of the double pointer
 * @n: data to add to the listint_t list
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new;
	}
	return (*head);
}
