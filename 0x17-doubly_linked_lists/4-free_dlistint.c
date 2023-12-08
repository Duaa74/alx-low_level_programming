#include "lists.h"

/**
 * free_dlistint - free a list
 * @head: the head of the list
 * Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = node->next;
		free(node);
	}
}
