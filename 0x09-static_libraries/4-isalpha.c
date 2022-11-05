/**
 * _isalpha - check alphabetic
 * @c: is the letter being tested
 *
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{

	if ((c >= 96 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
