#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 * @c: Number to be cuomputed
 * Return: Absolute value of num or zero
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_v;

		abs_v = c * -1;
		return (abs_v);
	}
	return (c);
}
