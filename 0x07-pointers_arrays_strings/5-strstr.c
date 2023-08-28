#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: the string to be searched
 * @needle: the string to be located
 *
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int c;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		c = 0;
		if (haystack[c] == needle[c])
		{
			do {
				if (needle[c + 1] == '\0')
					return (haystack);
				c++;
			} while (haystack[c] == needle[c]);
		}
		haystack++;
	}
	return ('\0');
}
