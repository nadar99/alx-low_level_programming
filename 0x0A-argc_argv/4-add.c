#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *@argc :argumanets count
 *@argv: array of argumanets strings
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc <= 1)
	{
		printf("0\n");
	}
	else
	{
		int sum = 0, i, x;

		for (i = 1; i < argc; i++)
		{
			x = atoi(argv[i]);

			if (x)
			{
				sum += x;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
