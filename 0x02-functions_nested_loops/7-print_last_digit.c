#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int lock = n % 10;

	if (lock < 0)
		lock *= -1;

	_putchar(lock + '0');

	return (0);
