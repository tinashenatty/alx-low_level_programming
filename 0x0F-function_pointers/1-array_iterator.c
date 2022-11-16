#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - exexcutes a function given as a parameter
 * @array: array to iterate over
 * @size: size of the array
 * @action: pointer to functio
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
