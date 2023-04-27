#include "main.h"

/**
 * _isupper - check if c is uppercase.
 *@c: charcter to check
 *
 * Return: 1 if uppercase , 0 is not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
