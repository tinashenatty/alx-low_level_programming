#include <unistd.h>

/**
 * _putchar - prints character c to the console
 * @c: char 
 *
 * Return: On success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
