#include "main.h"

/**
 * _memcpy - function copies n bytes
 * @n: function that copies
 * @src: bytes from memory area
 * @dest: bytes to memory area
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = drc[i];
		i++;
	}

	return (dest);
}
