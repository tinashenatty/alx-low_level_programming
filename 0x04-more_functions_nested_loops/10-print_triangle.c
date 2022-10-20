#include "main.h"

/**
 * print_triangle - print a triangle
 * @n: size of the triangle
 */

void print_triangle(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 0; y < x; y++)
				_putchar('#');

			if (x == n)
				continue;

			_putchar('\n');
		}
	}
}
