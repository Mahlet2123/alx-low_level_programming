#include "lists.h"

/**
 * delete_nodeint_at_index- deletes the node at index
 *
 * Returns: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del, *prev;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	del = *head;
	prev = *head;
	if (index != 0)
	{
		for (prev = *head; (index - 1) > i; i++)
		{
			prev = prev->next;
			if (prev == NULL)
				return (-1);
		}
		for (del = *head; index > i; i++)
		{
			del = del->next;
			if (del == NULL)
				return (-1);
		}
		prev->next = del->next;
		free(del);
		del = NULL;
	}
	else
	{
		while (index == 0)
		{
			*head = del->next;
			free(del);
			del = NULL;
			return (1);
		}
	}
	return (1);
}
