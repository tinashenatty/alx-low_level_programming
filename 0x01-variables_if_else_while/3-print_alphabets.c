#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry print alphabet
 *
 * Return: Always 0
 */

/* your code goes there */
int main(void)/* your code goes there */
{
	char ch;
	char ma;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}
	for (ma = 'A'; ma <= 'Z'; ma++)
	{
		if (ma != 'E' && ma != 'Q')
			putchar(ma);
	}
	putchar('\n');
	/* your code goes there */

	return (0);
}
