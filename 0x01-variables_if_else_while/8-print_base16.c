#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	char ch;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
