#include "lists.h"

/**
 *free_listint2- frees a listint_t list.
 *@head: pointer to the first
 *Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		exit(0);
	if (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
