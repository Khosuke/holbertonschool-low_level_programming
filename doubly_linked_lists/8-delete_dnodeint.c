#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at a specified index
 * in a doubly linked list
 * @head: the doubly linked list
 * @index: the chosen index
 *
 * Return: 1 for success, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);
	while (i < index)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
		i++;
	}
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	else
	{
		if (temp->next == NULL)
			temp->prev->next = NULL;
		else
		{
			temp->prev->next = temp->next;
			temp->next->prev = temp->prev;
		}
	}
	free(temp);
	return (1);
}
