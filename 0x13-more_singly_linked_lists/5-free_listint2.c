#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *free_listint2 - a function that frees a list_t list.
 *@head : list.
 *Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
