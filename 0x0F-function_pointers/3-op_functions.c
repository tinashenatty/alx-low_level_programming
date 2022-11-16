#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - calcculate the sum of two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Calculate the difference of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculate the product of a nad b
 * @a: the first integer
 * @b: secnd integer
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calalculate the division
 * @a: the first integer
 * @b: second integer
 *
 * Return: result of the division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("ERROR\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculate the remainder of a and b
 * @a: first num
 * @b: second num
 *
 * Return: result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
