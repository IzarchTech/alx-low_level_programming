#include "main.h"

/**
 * _islower - check the code.
 * @c: is the letter being tested
 *
 */
int _islower(int c)
{
	if (c >= 96 && c <= 122)
	{
		return (1);
	}

	return (0);
}
