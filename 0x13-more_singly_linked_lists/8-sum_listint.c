#include "lists.h"

/**
 *sum_listint- returns the sum of all the data (n)
 *@head: pointer to list
 *Return: sum of all the data (n)
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp->next != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	sum += temp->n;
	return (sum);
}
