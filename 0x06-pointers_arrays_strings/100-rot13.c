#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @s: string
 *
 * Return: s address
 */

char *rot13(char *s)
{
	int x, y;
	char s1[] = "abcdefghijklmnopqqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char s2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x = 0; *(s + x); x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (s1[y] == *(s + x))
			{
				*(s + x) = s2[y];
				break;
			}
		}
	}
	return (s);
}
