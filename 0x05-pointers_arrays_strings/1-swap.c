/**
 * swap_int - reset the number to 98
 *@a : pointer to an int
 *@b : pointer to an int
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}
