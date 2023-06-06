#include <stdlib.h>
#include "lists.h"
/**
 *add_nodeint_end - adds a new node at the beginning of a list_t list.
 *@head : list.
 *@n : int to add.
 *Return: the address of the new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;

	return (new);
}
