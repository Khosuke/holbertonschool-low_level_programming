#include "lists.h"

/**
 * add_dnodeint - function that add a new node
 * at the beginning of a dlistint_t double linked list
 * @head: the double linked list
 * @n: the data to add
 *
 * Return: The list with the added node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	if ((*head) != NULL)
	{
		new_node->prev = NULL;
		new_node->n = n;
		new_node->next = (*head);
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (*head);
}
