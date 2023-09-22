#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: A pointer to the list_t list
 * Return: void
 */
void free_list(list_t *head)
{
	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		list_t *tmp;

		tmp = head;
		free(tmp->str);
		free(tmp);
		head = head->next;
	}
}
