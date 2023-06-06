#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *delete_nodeint_at_index - delete node at a given position.
 *@head : list.
 *@index: index to delete at.
 *Return: 1 on success, -1 on error.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = *head, *temp2 = NULL;

	if (!temp)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (i < (index - 1))
	{
		if (!temp || !temp->next)
			return (-1);
		temp = temp->next;
		i++;
	}
	temp2 = temp->next;
	temp->next = temp2->next;
	free(temp2);
	return (1);
}
