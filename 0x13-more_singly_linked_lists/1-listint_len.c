#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *listint_len - returns the number of elements in a linked list_t list.
 *@h : list.
 *Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
