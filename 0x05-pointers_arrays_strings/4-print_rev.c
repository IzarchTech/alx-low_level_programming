#include "main.h"

/**
 * print_rev - print a given string in reverse
 * @str: given string
 */
void print_rev(char *str)
{
	int len = 0;
	int i;

	for (len = 0; str[len] != '\0'; len++)
		continue;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
