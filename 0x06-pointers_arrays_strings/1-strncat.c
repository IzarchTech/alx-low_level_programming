/**
 * *_strncat - concatenates two strings
 * @n: number of bytes to concatenate from source
 * @dest: destination
 * @src: source
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

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
