/**
 * _isdigit - check if a character is a digit
 * @c: the character to be checked
 *
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
