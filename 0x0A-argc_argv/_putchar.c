#include <unistd.h>

/**
 * _putchar - write the character c to the sdout
 * @c: The character to print
 *
 * Return: On success 1 otherwise -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
