#include <stdio.h>
/**
 * main - Prints the sum of all multiples of 3 or 5 up to 1024
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i;
	long int sum = 0, x = 1, y = 2;

	for (i = 1; i <= 50; i++)
	{
		sum = x + y;
		printf("%ld, ",sum);
		if (i != 1)
		{
			y = x;
		}
		x = sum;
	}
	printf("\n");
	return (0);
}
