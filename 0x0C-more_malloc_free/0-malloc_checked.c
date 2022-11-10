#include "main.h"

/**
 * malloc_checked - array that prints a string
 * @b: number of the memory
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
