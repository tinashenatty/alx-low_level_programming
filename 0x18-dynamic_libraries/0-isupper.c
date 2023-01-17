#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: Variable text
 * Return: Always o
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
