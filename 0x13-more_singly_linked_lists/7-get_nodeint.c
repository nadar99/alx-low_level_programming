#include "stdlib.h"
#include "lists.h"
/**
 *get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *@head : list.
 *@index: int
 *Return: node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	if (!head)
		return (NULL);

	return (head);

}
