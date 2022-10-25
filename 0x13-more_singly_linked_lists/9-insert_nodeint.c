#include "lists.h"

/**
 *insert_nodeint_at_index- inserts a new node at a given position
 *@head: pointer to list
 *@idx: index of the list where the new node should be added
 *Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *ptr;

        new = malloc(sizeof(listint_t));
        if (new == NULL)
        {
                return (NULL);
        }
        new->n = n;
	if (head == NULL)
		return (NULL);
        ptr = *head;
	if ((ptr->next) == NULL)
		return (NULL);
        if (ptr->next != NULL)
        {
            while (idx)
            {
                ptr = ptr->next;
                idx--;
            }
        new->next = ptr->next;
        ptr->next = new;
	}
	return (new);
}
