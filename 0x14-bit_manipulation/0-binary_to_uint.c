#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to astring containing a binary number
 *
 * Return: the converted number or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int c;
	unsigned int i;

	i = 0;
	if (!b)
		return (0);
	for (c = 0; b[c] != '\0'; c++)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
	}
	for (c = 0; b[c] != '\0'; c++)
	{
		i <<= 1;
		if (b[c] == '1')
			i += 1;
	}
	return (i);
}
