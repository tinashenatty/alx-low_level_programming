#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the multipliaction of two numbers
 * @argc: count of arguments
 * @argv: argument vector
 * Return: 0 if true else 1
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);

		return (0);
	}
	printf("Error\n");

	return (1);
}
