#include <stdlib.h>

/**
 * _strdup - Entry
 * @str: String given to duplicate
 * Return: pointer to copied string
 */
char *_strdup(char *str)
{
	char *x;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	x = (char *)malloc(sizeof(char) * (i + 1));

	if (x == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		x[j] = str[j];

	return (x);
}
