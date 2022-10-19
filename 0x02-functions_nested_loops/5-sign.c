#include "main.h"

/**
 * print_sign - print the sign of a num
 * @n: the number to be checked for
 * Return: 1 and print if tyhe number is greater than zero
 * otherwise 0 if number is zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
