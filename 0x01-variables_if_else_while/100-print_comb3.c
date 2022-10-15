#include <stdio.h>
/**
 * main -  prints all possible different combinations of two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int a, b, c, d, e, f, g, h, i;

	for (a = 0; a < 10; a++)
	{
		putchar('0' + a);
		if (a <= 9)
		{
			putchar(',');
			putchar(' ');
		}

	}
	for (b = 2; b < 10; b++)
	{
		putchar('1' + b);
		if (b <= 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	for (c = 3; c < 10; c++)
	{
		putchar('2' + c);
		if (c <= 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	for (d = 4; d < 10; d++)
	{
		putchar ('3' + d);
		if (d <= 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	for (e = 5; e < 10; e++)
	{
		putchar('4' + e);
		if (e <= 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	for (f = 6; f < 10; f++)
	{
		putchar('5' + f);
		if (f <= 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	for (g = 7; g < 10; g++)
	{
		putchar('6' + g);
		if (g <= 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	for (h = 8; h < 10; h++)
	{
		putchar('7' + h);
		if (h <= 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	for (i = 9; i < 10; i++)
	{
		putchar('8' + i);
	}

	putchar('\n');

	return (0);
}
