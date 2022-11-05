/**
 * _strncat - concatenates two strings,
 * @n: number of bytes to concatinate from source.
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	for (x = 0; dest[x] != '\0'; x++)
		x = x;

	for (y = 0; src[y] != '\0' && y < n; y++)
	{
		dest[x] = src[y];
		x++;
	}

	dest[x] = '\0';
	return (dest);
}
