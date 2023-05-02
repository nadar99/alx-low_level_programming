#include "main.h"
/**
 * print_rev - print string in reverse
 *@s : pointer to a charachter
 * Return: void.
 */
void print_rev(char *s)
{
	int size = 0;

	while (*s != '\0')
	{
		size++;
		s++;
	}
	while (size != 0)
	{
		_putchar(*s);
		s--;
		size--;
	}
	_putchar('\n');
}
