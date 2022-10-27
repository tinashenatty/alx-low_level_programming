#include "main.h"

/**
 * leet - encodes a string into number 1337
 * @n: input
 *
 * Return: value of input
 */

char *leet(char *n)
{
	int x, y;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (n[x] == s1[y])
			{
				n[x] = s2[y];
			}
		}
	}

	return (n);
}
