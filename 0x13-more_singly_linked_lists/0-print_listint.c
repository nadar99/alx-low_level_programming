#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *print_listint - prints all the elements of a list_t list
 *@h : list.
 *Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);

}
