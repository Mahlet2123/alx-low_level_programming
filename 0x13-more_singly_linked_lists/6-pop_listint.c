#include "lists.h"

/**
 *pop_listint- deletes the head node of a listint_t linked list
 *@head: double pointer to list
 *Return: head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = (*head)->n;
	temp = temp->next;
	free(*head);
	*head = temp;
	return (n);
}
