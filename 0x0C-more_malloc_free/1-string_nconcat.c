#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: number of chars to take from s2
 * Return: pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = 0, size2 = 0, i;
	int size;
	char *s;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	while (s1 && s1[size1])
	{
		size1++;
	}

	while (s2 && s2[size2])
	{
		size2++;
	}

	if (n >= size2)
		n = size2;

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
