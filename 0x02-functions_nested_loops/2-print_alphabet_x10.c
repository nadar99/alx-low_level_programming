#include "main.h"
/**
 * print_alphabet_x10 - writes the alphabets in lowercase to stdout 10 times
 *
 * Return: On success void.
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
