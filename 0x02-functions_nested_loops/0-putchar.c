#include "main.h"

int main(void)
{
	char output[] = "_putchar";
	int i = 0;
	int len = sizeof(output) / sizeof(output[0]);

	while(i < len)
	{
		_putchar(output[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}

