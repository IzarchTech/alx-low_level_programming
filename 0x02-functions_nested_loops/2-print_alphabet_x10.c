#include "main.h"

/**
 * print_alphabet_x10 - print lower case alphabets 10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char j = 'a';
	for(; i < 10; i++)
	{
		for (; i <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
