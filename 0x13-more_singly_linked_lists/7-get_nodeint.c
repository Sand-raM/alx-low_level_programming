#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head: pointer of the first node
 * @index: index of the node
 *
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c;

	if (head == NULL)
		return (NULL);
	for (c = 0; c < index; c++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
