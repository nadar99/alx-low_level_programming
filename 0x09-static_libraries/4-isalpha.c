#include "main.h"
/**
 * _isalpha - check if the character c is alpha
 * @c: The character to check
 *
 * Return: On success 1.
 * On error, 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
