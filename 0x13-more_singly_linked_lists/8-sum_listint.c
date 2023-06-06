#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *sum_listint - returns the sum of all the data (n) of a list.
 *@head : list.
 *Return: sum of nodes.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);

}
