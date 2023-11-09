#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;

	h = malloc(sizeof(dlistint_t));
	if (h == NULL)
		return (NULL);
	h->n = n;
	h->next = NULL;
	if (*head == NULL)
	{
		h->prev = NULL;
		*head = h;
		return (h);
	}
	while ((*head)->next != NULL)
		*head = (*head)->next;
	(*head)->next = h;
	h->prev = *head;
	return (h);
}
