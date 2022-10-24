#include "lists.h"

/**
 *add_nodeint_end- adds a new node at the beginning of a listint_t list
 *@n: integer
 *@head: pointer to list
 *Return: pointer to the list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *ptr;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
	ptr->next = new;
	}
	return (new);
}
