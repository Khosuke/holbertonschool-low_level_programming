#include "lists.h"

/**
 * add_node - function that add a new node 
 * at the beginning of a list_t list
 * @head: the list we want to add element
 * @str: the string to add to the list
 *
 * Return: Address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	if(new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
