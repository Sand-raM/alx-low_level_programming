#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head of the listint_t  list
 *
 * Return: The address of the node where the loop starts
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr, *l;

	ptr = l = head;
	while (ptr && l && l->next)
	{
		ptr = ptr->next;
		l = l->next->next;
		if (ptr == l)
		{
			ptr = head;
			break;
		}
	}
	if (!ptr || !l || !l->next)
		return (NULL);
	while (ptr != l)
	{
		ptr = ptr->next;
		l = l->next;
	}
	return (l);
}
