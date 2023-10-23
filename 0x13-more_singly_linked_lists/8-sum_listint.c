#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 * @head: pointer
 * Return: sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
