#include "main.h"

/**
 * print_line - print '_' @n times
 * @n: no of times '_' will be printed
 */
void print_line(int n)
{
	if (n > 0)
	{
		int o = 0;

		while (o < n)
		{
			_putchar(95);
			o++;
		}
	}
	_putchar('\n');
}
