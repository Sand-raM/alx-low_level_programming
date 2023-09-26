#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n)
 * @head: pointer to the head of the listint_t list
 *
 * Return: 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *last;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	last = *head;
	*head = last->next;
	n = last->n;
	free(last);
	return (n);
}
