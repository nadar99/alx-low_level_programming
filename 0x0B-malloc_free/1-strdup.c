#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/**
 * _strdup - copy string to a new memory location
 * @str: the string to copy
 *
 * Return: pointer to the string if success.
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0, size;

	if (str == NULL)
		return (NULL);

	size = strlen(str);
	s = malloc(size * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	while (i < size)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
