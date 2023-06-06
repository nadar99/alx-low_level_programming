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
	listint_t *temp, *head2 = *head;

	if (!head)
		return;
	while (head2)
	{
		temp = head2->next;
		free(head2);
		head2 = temp;
	}
	*head = NULL;
	head = NULL;
}
