#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: smallest number in the array
 * @max: largest number in the array
 *
 * Return: pointer to the address of the memory block
 */

int *array_range(int min, int max)
{
	int *ptr;
	int c, b = 0;

	if (min > max)
		return (NULL);
	b = max - min + 1;
	ptr = malloc(sizeof(int) * b);
	if (ptr == NULL)
		return (NULL);
	for (c = 0; min <= max; c++)
		ptr[c] = min++;
	return (ptr);
}
