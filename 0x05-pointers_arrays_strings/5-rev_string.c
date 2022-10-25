/**
 * rev_string - prints string in reverse
 * @str: a string
 */
void rev_string(char *str)
{
	int len = 0;

	for (len = 0; str[len] != '\0'; len++)
		continue;

	int idx = 0;
	int r_index = len - 1;
	char c;

	while (idx != r_index && idx < r_index)
	{
		c = str[idx];
		str[idx] = str[r_index];
		str[r_index] = c;
		idx++;
		r_index--;
	}
}
