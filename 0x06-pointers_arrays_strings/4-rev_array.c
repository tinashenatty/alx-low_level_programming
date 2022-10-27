#include "main.h"

/**
 * reverse_array - reverse array[integer]
 * @a: array
 * @n: number of elements of an arrray
 *
 * Return: reverse
 */

void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < n; x++)
	{
		n--;
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
