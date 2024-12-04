#include "lists.h"

/**
 * get_dnodeint_at_index - Return the nth node of a doubly linked list
 * @head: the doubly linked list
 * @index: the nth node we're looking for
 *
 * Return: The node at the chosen index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;

	if (head == NULL)
	{
		return (NULL);
	}
	while (i < index)
	{
		if (temp->next == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
		i++;
	}
	return (temp);
}
