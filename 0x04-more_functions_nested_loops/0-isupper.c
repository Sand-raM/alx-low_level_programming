#include "main.h"
/**
 * _isupper - Checks for uppercase character
 * @c: Text to be checked
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
