#include "main.h"

/**
 * _pow_recursion - Returns the value of x
 * @x: The number to be raised
 * @y: The power
 *
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	int res = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	res *= _pow_recursion(x, y - 1);

	return (res);
}
