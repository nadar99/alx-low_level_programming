#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 *@b : string containg the binary number
 * Return: unsigned int on sucess, 0 on error.
 */
unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int n = 0, p = 1;

	if (!b)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] == '1')
			n += p;
		p *= 2;
	}
	return (n);
}
