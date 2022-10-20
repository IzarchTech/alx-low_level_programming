#include "main.h"

/**
 * more_numbers - prints numbers between 0 - 14
 */
void more_numbers(void)
{
	int x = 0;

	while (x <= 9)
	{
		int y = 0;

		while (y <= 14)
		{
			if (y >= 10)
			{
				_putchar('0' + (y / 10));
			}
			_putchar('0' + (y % 10));
			y++;
		}

		_putchar('\n');
		x++;
	}
}
