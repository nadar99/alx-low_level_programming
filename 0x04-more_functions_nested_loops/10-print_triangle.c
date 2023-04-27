#include "main.h"

/**
 * print_triangle - print triangle.
 *@size: size of the square
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, x;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= (size - i); j++)
			{
				_putchar(' ');
			}
			for (x = 1; x <= i; x++)
			{
				_putchar('#');
			}
			if (i != size)
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
