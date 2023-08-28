#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				c++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (c);
		}
		s++;
	}
	return (c);
}
