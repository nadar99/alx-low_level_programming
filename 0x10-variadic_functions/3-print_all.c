#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything, followed by a new line.
 *@format : string.
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	char *sep = "", *s;

	va_start(list, format);

	if (format)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%i", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					s = va_arg(list, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", sep, s);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
