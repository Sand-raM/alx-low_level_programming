#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer of the unsigned long int
 * @index: index
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int c;

	if (index > 63)
		return (-1);
	c = 1 << index;
	if (*n & c)
		*n ^= c;
	return (1);
}
