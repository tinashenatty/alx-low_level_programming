#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: count of arguments
 * @argv: array of argumrnts
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
