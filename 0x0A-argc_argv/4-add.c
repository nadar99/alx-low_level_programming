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
		int sum = 0, i;

		for (i = 1; i < argc; i++)
		{
			char *c = argv[i];

			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
