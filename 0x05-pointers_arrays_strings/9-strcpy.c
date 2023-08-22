#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Description: copy the string pointed to by the pointer "src"
 * to the buffer pointed to by the "dest"
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');

	return (dest);
}
