#include "main.h"

/**
 * main - print "_putchar" on the screen
 *
 * Return: Always 0.
 */
int main(void)
{
	char output[] = "_putchar";
	int i = 0;

	while (i != '\0')
	{
		_putchar(output[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
