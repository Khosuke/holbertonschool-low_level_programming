#include <stdio.h>
#include "dog.h"

/**
 * init_dog - set the dog
 * @d: name of the structure for the dog
 * @name: name for the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: void function, no return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
