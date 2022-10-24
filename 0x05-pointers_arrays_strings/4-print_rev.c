#include "main.h"

/**
 * print_rev - print a given string in reverse
 * @str: given string
 */
void print_rev(char *str)
{
	int i;

	for (i = _strlen(str) - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
