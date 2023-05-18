#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: number of chars to take from s2
 * Return: pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, i;
	int size;
	char *s;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	if (n >= strlen(s2))
		n = strlen(s2);

	size1 = strlen(s1);
	size = size1 + n + 1;
	s = malloc(size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		s[i] = s1[i];
	}

	for (i = 0; i < n; i++)
	{
		*(s + size1 + i) = s2[i];
	}
	s[size - 1] = '\0';
	return (s);
}
