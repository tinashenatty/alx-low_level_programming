#include "main.h"

/**
 * _atoi - convert a string to an int
 * @s: pointer to convert
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int a = 0;
	unsigned int b = 0;
	int min = 1;
	int isi = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			min *= -1;
		}

		while (s[a] >= 48 && s[a] <= 57)
		{
			isi = 1;
			b = (b * 10) + (s[a] - '0');
			a++;
		}
		if (isi == 1)
		{
			break;
		}
		a++;
	}
	b *= min;
	return (b);
}
