#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - check the code
 * @d: pointer to a struct dog
 *
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
	}
}
