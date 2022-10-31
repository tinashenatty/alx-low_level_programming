#include "main.h"

/**
 * _memset - function fill the first n byte of the memory
 * @n: byte of the memory area pointed by s
 * @s: constant byte @b
 * @b: memory area pointer
 *
 * Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unisgned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++
	}
	return (s);
}
