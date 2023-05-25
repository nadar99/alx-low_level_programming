#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line.
 *@n : number of optional paramaters.
 *@separator : between the numbers
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *s;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(list, char*);
		if (s)
		{
			printf("%s", s);
		}
		else
		{
			printf("(nil)");
		}

		if (separator && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
