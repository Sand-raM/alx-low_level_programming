#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i, sum = 0, index = 0;
	char c[] = "Error", *find_letter;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			find_letter = argv[i];
			while (*find_letter != 0)
			{
				if (*find_letter < 47 || *find_letter > 57)
				{
					printf("%s\n", c);
					return (1);
				}
				find_letter++;
			}
			index = atoi(argv[i]);
			sum += index;
		}
		printf("%d\n", sum);
	}
	else
		printf("%d\n", 0);
	return (0);
}
