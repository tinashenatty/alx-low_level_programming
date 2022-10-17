#include <stdio.h>
/**
 * main - Entry program that prints all combinations of three digits
 *
 * Return: Always 0
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (b = '0'; b <= '9'; b++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			for (a = '0'; a <= '9'; a++)
			{
				if (b < c && c < a)
			{
				putchar(b);
				putchar(c);
				putchar(a);
				if (b == '7' && c == '8' && a == '9')
				{
				break;
				}
				else
				{
				putchar(',');
				putchar(' ');
				}
		}
			}
		}
	}
	putchar('\n');
	return (0);
}
