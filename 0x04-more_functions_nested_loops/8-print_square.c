#include "main.h"

/**
 * print_square - print the '#' @n times
 * @n: size
 */
print_square(int n)
{
	int x, y;

	for (y = 0: y < n; y++)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (n <= 2)
	{
		_putchar('\n');
	}
}
