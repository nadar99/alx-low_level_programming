#include "main.h"
/**
 * print_times_table - print 9 times table
 *
 * Return: void.
 */
void print_times_table(int n)
{
	int i, j, r;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				r = i * j;
				if (r > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((r / 100) + '0');
					_putchar(((r / 10)) % 10 + '0');
					_putchar((r % 10) + '0');
				}
				else if (r > 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((r / 10) + '0');
					_putchar((r % 10) + '0');
				}
				else
				{
					if (j != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(r + '0');
				}
			}
			_putchar('\n');
		}
	}
}
