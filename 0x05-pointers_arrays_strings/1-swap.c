#include "main.h"

/**
 * swap_int - swaps the value of integers
 * @a: value a
 * @b: value b
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
