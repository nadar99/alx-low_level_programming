#include "main.h"

/**
 *get_bit - returns the value of a bit at a given index.
 *@n : the number
 *@index: int
 * Return: int.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int x;

	x = n >> index;
	if (index > 32)
		return (-1);
	return (x & 1);
}
