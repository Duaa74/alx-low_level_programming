#include "lists.h"
/**
 * sum_dlistint - sum of all data of a list
 * @head: the head of the list
 * Return: sum of all data of
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
