#include "lists.h"

/**
 * sum_dlistint - Sum all the data (n)
 * of a dlistint_t linked list
 * @head: The linked list
 *
 * Return: The sum of the int head->n in the linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (sum);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
