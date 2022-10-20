#include "main.h"

/**
 * print_diagonal - print '_' @n times
 * @n: no of times '_' will be printed
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int o = 0;

		while (o < n)
		{
			_putchar(92);
			o++;
		}
	}
	_putchar('\n');
}
