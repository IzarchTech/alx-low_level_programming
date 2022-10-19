#include "main.h"

/**
 * _isalpha - check if the character is an alphabet
 * @c: is the character being tested
 *
 * Return: 1 if the character is an alphabet or 0
 */
int _isalpha(int c)
{
	if ((c >= 96 && <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}

	return (0);
}
