#include <stdlib.h>
/**
 * _realloc - function that allocates memory using malloc
 * @ptr: memory block
 * @old_size: the old size of the memory block
 * @new_size: the new size
 * Return: void pointer to the memory allocated.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		for (i = 0; i < old_size; i++)
		{
			*((char *)p + i) = *((char *)ptr + i);
		}
		free(ptr);
	}
	return (p);
}
