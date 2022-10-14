#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	t = n % 10;
	if (t > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, t);
	if (t == 0)
		printf("Last digit of %d is %d and is 0\n", n, t);
	if (t < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 and 0\n", n, t);
	return (0);
}
