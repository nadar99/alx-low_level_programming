/**
 * reverse_array - print array of integers in reverse
 *@a : the array
 *@n : size of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		int temp = a[j];

		a[j] = a[i];
		a[i] = temp;
	}
}
