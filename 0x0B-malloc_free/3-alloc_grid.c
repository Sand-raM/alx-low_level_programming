#include <stdio.h>
#include <stdlib.h>
#include "main.h"
 /**
  * alloc_grid - returns a pointer to a 2 dimensional array of integers
  * @width: width of array
  * @height: height of array
  *
  * Return: pointer to the array
  */

int **alloc_grid(int width, int height)
{
	int **array;
	int c = 0, b;

	if (width == 0 || height == 0)
		return (NULL);
	array = (int **) malloc(sizeof(int *) * height);
	if (array != NULL)
	{
		for (; c < height; c++)
		{
			array[c] = (int *) malloc(sizeof(int) * width);
			if (array[c] != NULL)
			{
				for (b = 0; b < width; b++)
					array[c][b] = 0;
			}
			else
			{
				while (c >= 0)
				{
					free(array[c]);
					c--;
				}
				free(array);
				return (NULL);
			}
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}
