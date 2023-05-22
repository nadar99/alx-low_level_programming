#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @str: string
 *
 * Return: length
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *_strcpy - copiy string from src to dest
 * @dest: dest string
 * @src: src string
 *
 * Return: pointer
 */
char *_strcpy(char *src, char *dest)
{
	int len = _strlen(src), i;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - check the code
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	int name_len = _strlen(name), owner_len = _strlen(owner);

	my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
		return (NULL);

	my_dog->name = malloc(sizeof(char) * (name_len + 1));

	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	my_dog->owner = malloc(sizeof(char) * (owner_len + 1));

	if (my_dog->owner == NULL)
	{
		free(my_dog);
		free(my_dog->name);
		return (NULL);
	}

	_strcpy(name, my_dog->name);
	my_dog->age = age;
	_strcpy(owner, my_dog->owner);
	return (my_dog);
}
