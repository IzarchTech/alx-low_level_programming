#include "main.h"

/**
 * print_sign - prints the sign of a given number
 * @n: the number that is being evaluated
 *
 * Return: 0 if n == 0, 1 if n > 0 or -1 if n < 0
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	_putchar('0');
	return (0);
}
