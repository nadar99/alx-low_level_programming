#include "main.h"

/**
 * _isdigit - check if c is a digit.
 *@c: charcter to check
 *
 * Return: 1 if digit , 0 is not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
