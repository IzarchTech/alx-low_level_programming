/**
 * *_strcpy - copies the string to a destination to a source
 * including the terminating null byte (\0)
 * to the buffer pointed to by destination
 * @dest: destination
 * @src: string to be copied
 *
 * Return: pointer to the destination
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
