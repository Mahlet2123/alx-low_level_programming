#include "lists.h"
/**
 * dlistint_len- returns the number of elements in a linked dlistint_t list
 * @h: pointer to the linked list
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}

