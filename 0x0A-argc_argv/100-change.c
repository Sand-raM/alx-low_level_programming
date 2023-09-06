#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main -  prints the minimum number of coins
 * to make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int x = 0, coins = 0;
	char c[] = "Error";

	if (argc != 2)
	{
		printf("%s\n", c);
		return (1);
	}
	x = atoi(argv[1]);
	while (x >= 25)
	{
		x -= 25;
		coins++;
	}
	while (x >= 10)
	{
		x -= 10;
		coins++;
	}
	while (x >= 5)
	{
		x -= 5;
		coins++;
	}
	while (x >= 2)
	{
		x -= 2;
		coins++;
	}
	if (x == 1)
		coins++;
	printf("%d\n", coins);
	return (0);
}
