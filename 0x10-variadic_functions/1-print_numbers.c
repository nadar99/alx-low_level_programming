#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 *@n : number of optional paramaters.
 *@separator : between the numbers
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
