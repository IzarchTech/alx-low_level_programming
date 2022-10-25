#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: a string
 */
void puts2(char *str)
{
	int len = 0;

	for (len = 0; str[len] != '\0'; len++)
	{
		if (len % 2 == 0)
			_putchar(str[len]);
	}
	_putchar('\n');
}
