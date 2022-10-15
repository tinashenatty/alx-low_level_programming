#include <stdio.h>
/*
 * main -prints output alphabets in lower and upper
 *
 * Return: Always 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
