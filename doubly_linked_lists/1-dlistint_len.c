#include "lists.h"

/**
 * dlistint_len - count the number of elements
 * in a double linked dlistint_t list
 * @h: the double linked list
 *
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
