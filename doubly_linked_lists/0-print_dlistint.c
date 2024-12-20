#include "lists.h"

/**
 * print_dlistint - print all the elements of a dlistint_t list
 * @h: list to print
 *
 * Return: Number of nodes of list h
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
