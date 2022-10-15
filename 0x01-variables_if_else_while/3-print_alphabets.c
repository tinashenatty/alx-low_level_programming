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
	/* the code goes in here*/
	char ch;
	/* your code goes there */

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}
	putchar('\n');
	/* your code goes there */

	return (0);
}
