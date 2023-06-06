#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *free_listint - a function that frees a list_t list.
 *@head : list.
 *Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
