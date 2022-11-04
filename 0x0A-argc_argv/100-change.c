#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - Find the smallest number of coins to make an amount of change
 * @argc: Arg count
 * @argv: Contains all arguments
 *
 * Return: 1 on error, 0 for success
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc == 2)
	{
		cents = atoi(*(argv + 1));
		while (cents > 0)
		{
			if (cents % 25 < cents)
			{
				cents -= 25;
			}
			else if (cents % 10 < cents)
			{
				cents -= 10;
			}
			else if (cents % 5 < cents)
			{
				cents -= 5;
			}
			else if (cents % 2 < cents)
			{
				cents -= 2;
			}
			else if (cents % 1 < cents)
			{
				cents -= 1;
			}
			coins++;
		}
	}
	else
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	printf("%d\n", coins);
	exit(EXIT_SUCCESS);
}
