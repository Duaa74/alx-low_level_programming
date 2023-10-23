#include "lists.h"

/**
 * pop_listint - delets the head node
 * @head: pointer
 * Return: the head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int info;

	if (!head || !*head)
		return (0);

	info = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (info);
}
