#include <stdio.h>
#include "main.h"

/**
 * main - Print all arguments it receives
 * @argc: count of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc > 0)
	{
		while (sum < argc)
		{
			printf("%s\n", argv[sum]);
		}
	}
	return (0);
}
