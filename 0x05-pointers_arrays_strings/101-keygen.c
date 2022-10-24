#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 *
 * Return: Always 0
 */

int main(void)
{
	char password[84];
	int i = 0, sum = 0, natty1, natty2;

	srand(time(0));

	while (sum < 2772)
	{
		password[i] = 33 + rand() % 94;
		sum += password[i++];
	}

	password[i] = '\0';

	if (sum != 2772)
	{
		natty1 = (sum - 2772) / 2;
		natty2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			natty1++;

		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + natty1))
			{
				password[i] -= natty1;
				break;
			}
		}
		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + natty2))
			{
				password[i] -= natty2;
				break;
			}
		}
	}
	printf("%s", password);

	return (0);
}
