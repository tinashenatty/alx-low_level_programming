#include "main.h"

/**
 * rev_string - rev a string
 * @s: user input
 *
 * Return: string in rev
 */

void rev_string(char *s)
{
	char ch = s[0];
	int a = o;
	int b;

	while (s[a] != '\0')
		a++;
	for (b = 0; b < a; b++)
	{
		a--;
		ch = s[b];
		s[b] = s[a];
		s[a] = ch;
	}
}
