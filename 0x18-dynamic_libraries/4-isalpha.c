#include "main.h"
/**
 * _isalpha - checks for alphabetic characters
 * @c: the character to be check
 * Return: 1 if is alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
