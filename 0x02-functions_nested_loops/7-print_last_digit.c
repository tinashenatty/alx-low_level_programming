#include "main.h"

/**
 * print_last_digit - print the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
		lastDigit *= -1;

	_putchar(lastDigit + '0');

	return (0);
}
