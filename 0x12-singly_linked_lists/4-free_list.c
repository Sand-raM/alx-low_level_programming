#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: A pointer to the list_t list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
