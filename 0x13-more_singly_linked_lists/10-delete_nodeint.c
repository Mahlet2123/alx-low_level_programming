#include "lists.h"

/**
 * delete_nodeint_at_index- deletes the node at index
 *@head: double pointer to the list
 *@index: index of the list where the node should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del, *prev;

	del = *head;
	prev = *head;
	if (*head == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = del->next;
		free(del);
		del = NULL;
		return (1);
	}
	else
	{
		while (index != 0)
		{
			prev = del;
			del = del->next;
			index--;
		}
		prev->next = del->next;
		free(del);
		del = NULL;
	}
	return (1);
}
