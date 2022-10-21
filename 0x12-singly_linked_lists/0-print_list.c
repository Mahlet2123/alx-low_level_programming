#include "lists.h"

/**
 * print_list - print list of elements
 * @h: input
 * Return: Number of Nodes
 */

size_t print_list(const list_t *h)
{
	if (h)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] %s\n", 0, "(nil)");
		if (h->next != NULL)
			return (1 + print_list(h->next));
	}
	return (1);
}
