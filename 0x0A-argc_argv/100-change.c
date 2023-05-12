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
	if (argc == 2)
	{
		int result = 0, change = atoi(argv[1]), i;
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (change >= cents[i])
			{
				result += change / cents[i];
				change %= cents[i];
				if (!change)
				{
					break;
				}
			}
		}
		printf("%d\n", result);
	}
	else
	{
		return (printf("Error\n"), 1);
	}
	return (0);
}
