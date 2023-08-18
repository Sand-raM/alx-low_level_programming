#include <stdio.h>

/**
 * main -  prints the numbers from 1 to 100, followed by a new line
 * for multiples of three print Fizz instead of the number
 * for the multiples of five print Buzz
 *  multiples of both three and five print FizzBuzz
 *  Return: 0
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FIZZBUZZ");

		else if ((num % 3) == 0)
			printf("FIZZ");

		else if ((num % 5) == 0)
			printf("BUZZ");
		else
			printf("%d", num);
		if (num == 100)
			continue;
		printf(" ");
	}
	printf("\n");

	return (0);
}
