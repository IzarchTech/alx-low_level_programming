#include "main.h"

/**
 * print_last_digit - last digit
 * @n: is the letter being tested
 *
 * Return: Always 4
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}

		_putchar(l + 48);
		return (l);
}
