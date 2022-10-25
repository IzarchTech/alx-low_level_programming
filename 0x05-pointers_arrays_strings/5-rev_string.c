/**
 * rev_string - prints string in reverse
 * @str: a string
 */
void rev_string(char *str)
{
	int len = 0;
	int idx = 0;
	char c;
	int r_index;

	for (len = 0; str[len] != '\0'; len++)
		continue;

	r_index = len - 1;

	while (idx != r_index && idx < r_index)
	{
		c = str[idx];
		str[idx] = str[r_index];
		str[r_index] = c;
		idx++;
		r_index--;
	}
}
