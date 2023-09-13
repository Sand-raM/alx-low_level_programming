#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds two numbers
 * @a: number 1
 * @b: number 2
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: number 1
 * @b: number 2
 *
 * Return: result of subtraction of two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: numbers 1
 * @b: number 2
 *
 * Return: result of multiplication two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: number 1
 * @b: number 2
 *
 * Return: result of division of two numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulates two numbers
 * @a: number 1
 * @b: number 2
 *
 * Return: result of modulation of two numbers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
