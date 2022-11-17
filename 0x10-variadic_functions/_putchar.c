#include <unistd.h>

/**
 * _putchar - writes the character c to the sdout
 * @c: The character to rpint
 *
 * Return: ON sucess 1, else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
