#include "main.h"
/**
 * _puts - print string followed by a new line
 *@str : pointer to a charachter
 * Return: void.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
