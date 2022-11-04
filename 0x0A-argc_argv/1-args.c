#include <stdio.h>
#include <stdlib.h>

/**
 * main - app entry
 * @argc: argument size
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
