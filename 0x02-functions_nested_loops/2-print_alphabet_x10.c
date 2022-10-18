#include "main.h"
/**
 * print_alphabet_x10 - lower case
 *
 * Return: Always 0.
 *
 */
void print_alphabet_x10(void)

{

	char i = 'a';
	int x = 1;

	for (x = 1; x <= 10; x++)
	{
	for (i = 'a'; i <= 'z'; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
	}

}
