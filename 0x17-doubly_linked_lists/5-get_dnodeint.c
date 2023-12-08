#include "lists.h"

/**
 * get_dnodeint_at_index - get a node at index
 * @head: the head of the node
 * @index: the index of the node
 * Return: the index of the node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
