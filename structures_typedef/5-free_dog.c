#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - free the memory after using new_dog
 * @d: the dog structure to free
 *
 * Return: Void function, no return
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
}
