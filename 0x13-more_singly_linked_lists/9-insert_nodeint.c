#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *insert_nodeint_at_index - inserts a new node at a given position.
 *@head : list.
 *@idx: index to insert into.
 *@n : integer to inset
 *Return: the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *temp = *head;

	new = malloc(sizeof(listint_t));

	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; (temp && i < idx); i++)
	{
		if (i == (idx - 1))
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
		{
			temp = temp->next;
		}
	}
	return (NULL);
}
