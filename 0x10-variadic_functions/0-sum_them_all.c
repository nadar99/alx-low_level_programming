#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 *@n : number of optional paramaters.
 * Return: int.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum = 0;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);
	return (sum);
}
