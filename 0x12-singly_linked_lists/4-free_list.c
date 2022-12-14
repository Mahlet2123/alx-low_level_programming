#include "lists.h"

/**
 * free_list- frees a list_t list.
 * @head: pointer
 * Return: the address of the new element, or NULL if it fails
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
