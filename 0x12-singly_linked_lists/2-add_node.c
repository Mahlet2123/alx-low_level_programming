#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer
 * @str: new string to add in the node
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newhead;
	unsigned int len = 0;

	for (; str[len]; len++)
		;
	newhead = malloc(sizeof(list_t));
	if (newhead == NULL)
	{
		exit(98);
	}

	newhead->str = strdup(str);
	newhead->len = len;
	newhead->next = (*head);
	(*head) = newhead; 

	return(*head);
}
