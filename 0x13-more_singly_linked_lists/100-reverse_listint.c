#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointer
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *l;
	listint_t *n;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	l = NULL;
	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = l;
		l = *head;
		*head = n;
	}
	*head = l;
	return (*head);
}
