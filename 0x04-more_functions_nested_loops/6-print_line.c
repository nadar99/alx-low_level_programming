#include "main.h"

/**
 * print_line - print line with n _ charcater.
 *@n : number of _
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
