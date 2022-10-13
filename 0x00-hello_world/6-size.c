#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long long my_int;
	long my_long_int;
	float f;

	printf("Size of a char: %d bytes(s)\n", sizeof(c));
	printf("Size of an int: %d bytes(s)\n", sizeof(i));
	printf("Size of a long int: %d bytes(s)\n", sizeof(my_long_int));
	printf("Size of a long long int: %d bytes(s)\n", sizeof(my_int));
	printf("Size of a float: %d bytes(s)\n", sizeof(f));
	return (0);
}
