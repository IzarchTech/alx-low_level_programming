#include "main.h"

/**
 * print_diagonal - print '_' @n times
 * @n: no of times '_' will be printed
 */
void print_diagonal(int n)
{
	int x, y, z;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			z = x - 1;

			for (y = 0; y <= z; y++)
			{
				_putchar(' ');
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
}
