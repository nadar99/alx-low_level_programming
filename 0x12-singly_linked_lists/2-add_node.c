#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * len - return the length of a string.
 *@str: string
 * Return: length of a string.
 */
unsigned int len(const char *str)
{
	unsigned int n = 0;

	while (*str != '\0')
	{
		n++;
		str++;
	}
	return (n);
}

/**
 *add_node - adds a new node at the beginning of a list_t list.
 *@head : list.
 *@str : string to add.
 *Return: the address of the new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (!str)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	if (!new->str)
		return (NULL);
	new->len = len(str);
	new->next = *head;
	*head = new;
	return (*head);
}
