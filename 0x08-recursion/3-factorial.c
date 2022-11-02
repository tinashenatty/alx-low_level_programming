#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The number to be find the factorial
 *
 * Return: int
 */

int factorial(int n)
{
	int x = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	x *= factorial(n - 1);
	return (x);
}
