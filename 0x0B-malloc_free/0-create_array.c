#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create array of chars,initializes it with a specific char.
 * @size: size of the array
 * @c: char to fill the array with
 *
 * Return: pointer to the array if success.
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	a = malloc(size * sizeof(char));
	if (!size || a == NULL)
		return (NULL);
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);

}
