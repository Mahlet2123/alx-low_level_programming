#include "lists.h"

/**
 *add_nodeint- adds a new node at the beginning of a listint_t list
 *
 *Returns:pointer to the list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (new->n)
		return (NULL);
	new = *head;
	*head = new;
	return (*head);
}
