#include <stdio.h>
/**
 * main - Prints the sum of all multiples of 3 or 5 up to 1024
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i;
	long int x = 1, y = 2;

	for (i = 0; i < 50; i++)
	{
		if (i == 0)
		{
			printf("%ld", x);
		}
		else if (i == 1)
		{
			printf(", %ld", y);
		}
		else
		{
			y += x;
			x = y - x;
			printf(", %ld", y);
		}
	}
	printf("\n");
	return (0);
}
