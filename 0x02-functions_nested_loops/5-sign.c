#include "main.h"
/**
 * print_sign - print sign on number n
 * @n: The number to check
 *
 * Return: On positive 1.
 * On zero, 0, on negative -1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
