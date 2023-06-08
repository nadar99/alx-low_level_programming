#include "main.h"

/**
 *flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 *@n: int
 *@m: int
 * Return: int.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, f = 0;
	unsigned long int j = sizeof(unsigned long int) * 8;

	for (i = 0; i < j; i++)
	{
		if ((m & 1) != (n  & 1))
			f++;
		n = n >> 1;
		m = m >> 1;
	}
	return (f);
}
