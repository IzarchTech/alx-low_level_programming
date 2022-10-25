#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: a string
 */
void rev_string(char *str)
{
	int len = _strlen(str);

	int idx = 0;

	int r_index = len -1;
	
	char c;

	while (idx != r_index && idxx < r_idex)
	{
		c = str[idx];
		s[idx] = s[r_index];
		s[r_index] = c;
		idx++;
		r_index--;
	}
}
