#include "main.h"
/**
 * puts_half - print half of a string
 *@str : pointer to a charachter
 * Return: void.
 */
void puts_half(char *str)
{
	int size = 0, i = 0;
	char *str2 = str;

	while (*str2 != '\0')
	{
		size++;
		str2++;
	}
	while (*str != '\0')
	{
		if (size % 2 == 0)
		{
			if (i >= (size / 2))
			{
				_putchar(*str);
			}
		}
		else
		{
			if (i >= ((size - 1) / 2) + 1)
			{
				_putchar(*str);
			}
		}
		str++;
		i++;
	}
	_putchar('\n');
}
