#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: memory size
 * Return: void pointer to the memory allocated.
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
