#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry program that prints all combinations of three digits
 *
 * Return: Always 0
 */
int main(void)
{
	int a;
	int b = 0;
	int c;

	for (a = 0; a < 10; a++)
	{
		for (c = b; c < 10; c++)
		{
			if (a != c)
			{
				putchar(a);
				putchar(c);
			}
			if (a == c)
			{
				continue;
			}
			if (a == '8' && c == '9')
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		b++;
	}
		putchar('\n');
		return (0);
}
