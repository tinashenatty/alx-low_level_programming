#include "main.h"

/**
 * more_numbers - prints 0 to 14 for ten times
 * Return: Always 0
 */

void more_numbers(void)
{
	int x, y;

	for (a = 1; a <= 10; a++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
			_putchar('1');
			_pucthar(y % 10 + '0');

		}

		_putchar('\n');
	}
}
