#include <stdio.h>

/**
 * print_array - function that prints elements of an array of integers
 *
 * @a: integer pointer
 * @n: integer
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; ++x)
	{
		if (x != (n - 1))
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	}

	printf("\n");
}
