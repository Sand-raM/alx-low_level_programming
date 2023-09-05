#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: count of args passed to the function
 * @av: array of arguments
 *
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int c = 0, i = 0, j = 0, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		while (av[i][j])
		{
			c++;
			j++;
		}
		j = 0;
		i++;
	}
	s = malloc((sizeof(char) * c) + ac + 1);
	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
		s[k] = av[i][j];
		k++;
		j++;
	}
	s[k] = '\n';
	j = 0;
	k++;
	i++;
	}
	k++;
	s[k] '\0';

	return (s);
}
