#include "main.h"

/**
 * more_numbers - prints 0 to 14 for ten times
 * Return: Always 0
 */

void more_numbers(void)
{
	int x, y;

	for (y = 0; y <= 9; y++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}

		_putchar('\n');
	}
}
