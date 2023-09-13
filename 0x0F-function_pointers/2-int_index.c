#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array containing elements
 * @size: number of elements in array
 * @cmp: function to compare values
 *
 * Return: pointer to the first corresponding element
 * -1 if no elements match or when size is less than 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (; i < size; i++)
	{
		if (cmp(array[i] != 0)
				return (i);
				}
				return (-1);
				}

