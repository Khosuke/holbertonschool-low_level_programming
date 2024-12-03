#include "lists.h"

/**
 * free_list - free memory of a linked list
 * @head: linked list
 *
 * Return: no return
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
