#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: A pointer to the head of the list_t lis
 * @str: string to be added to the list_t list
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (!head)
		return (0);
	new = malloc(sizeof(list_t));
	if (!new)
		return (0);
	new->str = strdup(str);
	new->len = _strlen((char *)str);
	new->next = *head;
	*head = new;

	return (*head);
}
/**
* _strlen - finding the lenght of a string.
* @s: first pointer
* Return: it returns the length of the string.
*/
int _strlen(char *s)
{
	int str;

	str = 0;
	while (s[str] != '\0')
	{
		str++;
	}
	return (str);
}
