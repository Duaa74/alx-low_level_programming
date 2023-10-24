#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: pointer
 * Return: number of the node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *vets;
	size_t counter = 0;

	if (!head || !head->next)
	{
		return (0);
	}
	current = head;
	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		counter++;
		if (current > current->next)
		{
			current = current->next;
		}
		else
		{
			vets = current->next;
			printf("-> [%p] %d\n", (void *)vets, vets->n);
			break;
		}
	}
	return (counter);
}
