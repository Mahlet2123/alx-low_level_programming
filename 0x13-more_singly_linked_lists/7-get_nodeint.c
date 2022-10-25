#include "lists.h"

/**
 *get_nodeint_at_index- returns the nth node of a listint_t linked list
 *@index: index of the node, starting at 0
 *@head: pointer to list
 *Return: pointer to the list at nth node of a listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (index)
	{
		temp = temp->next;
		index--;
	}
	return (temp);
}
