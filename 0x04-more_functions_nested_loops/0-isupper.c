/**
 * _isupper - check if a character is in uppercase
 * @c: the character that is being checked
 *
 * Return: 1 if true else 0
 */
int _isupper(int c)
{
	if (c >= 64 && c <= 90)
	{
		return (1);
	}

	return (0);
}
