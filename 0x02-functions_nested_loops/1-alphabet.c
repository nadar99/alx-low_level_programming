#include "main.h"
/**
 * print_alphabet - writes the alphabets in lowercase to stdout
 *
 * Return: On success void.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
