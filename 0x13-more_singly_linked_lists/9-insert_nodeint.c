#include "lists.h"

/**
 *insert_nodeint_at_index- inserts a new node at a given position
 *@head: pointer to list
 *@idx: index of the list where the new node should be added
 *@n: integer data
 *Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *ptr;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx != 0)
	{
		ptr = *head;
		for (; (idx - 1) > i && ptr != NULL; i++)
			ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
	}
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = ptr->next;
	ptr->next = new;
	return (new);
}
