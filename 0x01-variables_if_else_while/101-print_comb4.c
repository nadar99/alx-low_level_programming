#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, x;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			for (x = j + 1; x <= 57; x++)
			{
				putchar(i);
				putchar(j);
				putchar(x);
				if ((i != 55) || (j != 56) || (x != 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
