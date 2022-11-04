#include <stdio.h>
#include <stdlib.h>

/**
 * main - app entry
 * @argc: argument count
 * @argv: arguments
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main(int argc, char **argv)
{
	int result = 1;
	int i = 1;

	if (argc < 3)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}

	while (i < argc)
	{
		result *= atoi(argv[i]);
		i++;
	}
	printf("%d\n", result);
	exit(EXIT_SUCCESS);
}
