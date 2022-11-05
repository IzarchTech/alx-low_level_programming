/**
 * _strncpy - concatenates two strings,
 * @n: number of bytes to concatinate from source.
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)

		dest[x] = src[x];

	for ( ; x < n; x++)
		dest[x] = '\0';

	return (dest);
}
