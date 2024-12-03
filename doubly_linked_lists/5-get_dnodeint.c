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

	while (i <= index - 1 && head != NULL)
	{
		if (head->next == NULL && i != index - 1)
		{
			return (NULL);
		}
		head = head->next;
		i++;
	}
	return (head);
}
