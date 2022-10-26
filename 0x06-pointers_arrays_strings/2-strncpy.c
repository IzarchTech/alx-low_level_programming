/**
 * _strncpy - copies a string
 * @n: number of bytes to concatenate from source
 * @dest: destination
 * @src: source
 * Return: the pointer to the destination
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
