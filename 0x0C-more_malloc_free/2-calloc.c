#include <stdlib.h>
/**
 * _calloc - function that allocates memory using malloc
 * @nmemb: number of elements
 * @size : of element
 * Return: void pointer to the memory allocated.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);
	c = p;
	for (i = 0; i < nmemb * size; i++)
	{
		c[i] = 0;
	}

	return (p);
}
