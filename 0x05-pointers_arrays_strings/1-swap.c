/**
 * swap_int - swap two integers
 * @a: interger a
 * @b: integer b
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
