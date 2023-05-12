#include "main.h"
/**
 * _islower - check if the character c is lowercase
 * @c: The character to check
 *
 * Return: On success 1.
 * On error, 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
