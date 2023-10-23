#include "lists.h"

/**
 * listint_len - returns the elements in a list
 * @h: pointer
 * Return: the number of the elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
