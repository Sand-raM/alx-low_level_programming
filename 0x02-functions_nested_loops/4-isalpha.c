#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: The character to be be checked
 * Return: 1 for a letter, lowercase or uppercase or 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
			return (0);
}

