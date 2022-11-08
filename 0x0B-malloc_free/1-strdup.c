#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer
 * @str: the source string
 *
 * Return: a pointer else NULL
 */

char *_strdup(char *str)
{
	char *c;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;
	c = (char *)malloc((sizeof(char) * len) + 1;
			if (c == NULL)
			return (NULL);

			for (i = 0; i < len; i++)
			c[i] = str[i];

			c[len] = '\0';

			return (c);
			}
