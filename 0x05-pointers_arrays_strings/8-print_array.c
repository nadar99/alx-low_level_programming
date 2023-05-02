#include <stdio.h>
/**
 *print_array - print n numbres of an array
 *@a : pointer to an array
 *@n : numbers to print
 * Return: void.
 */
void print_array(int *a, int n)
{
	int i = 1;

	printf("%d", *a);
	while (i < n)
	{
		printf(", %d", *(a + i));
		i++;
	}
	printf("\n");
}
