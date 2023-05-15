#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/**
 * str_concat - concatenate two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the string if success.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	int size1 = strlen(s1), size2 = strlen(s2), sizet = size1 + size2;
	char *str;

	str = malloc((sizet * sizeof(char) + 1));
	if (str == NULL)
		return (NULL);
	while (i < size1)
	{
		str[i] = s1[i];
		i++;
	}

	while (j < size2 && i < sizet)
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
