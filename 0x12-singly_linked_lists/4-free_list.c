#include "lists.h"

/**
 * free_list- frees a list_t list.
 * @head: pointer
 * Return: the address of the new element, or NULL if it fails
 */

void free_list(list_t *head)
{
	list_t *ptr;

	if (head != NULL)
	{
		ptr = head;
		head = head->next;
		free (ptr);
	}
}
