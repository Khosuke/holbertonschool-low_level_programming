#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given
 * position of a doubly linked list
 * @h: the doubly linked list
 * @idx: chosen index
 * @n: data of the new node
 *
 * Return: The address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *h;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = temp;
		if (h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (i < idx - 1)
	{
		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (temp->next != NULL)
	{
		temp->next->prev = new_node;
	}
	new_node->prev = temp;
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
