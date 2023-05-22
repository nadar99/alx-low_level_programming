#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - check the code
 * @d: pointer to a struct dog
 *
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	free(d);
	free(d->name);
	free(d->owner);
}
