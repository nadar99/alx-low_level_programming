#include "main.h"
#include <stdio.h>
/**
 * puts2 - print every other char in a string
 *@str : pointer to a charachter
 * Return: void.
 */
void puts2(char *str)
{
	int size = 0, i = 0;
	char *str2 = str;

	while (*str2 != '\0')
	{
		size++;
		str2++;
	}
	while (i <= (size / 2))
	{
		_putchar(*str);
		str++;
		str++;
		i++;
	}
	_putchar('\n');
}
