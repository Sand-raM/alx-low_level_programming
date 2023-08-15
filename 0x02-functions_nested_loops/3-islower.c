#include "main.h"

/**
 * _islower - check lower case characters
 * @c: the character to be checked
 * Return:  for a lower case or 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
