#include "lists.h"

/**
 * free_dlistint - free the memory of dlistint_t list
 * @head: the double linked list to free
 *
 * Return: No return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
