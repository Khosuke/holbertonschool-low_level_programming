#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print infos about the dog
 * @d: pointer to dog structure content
 *
 * Return: void function, no return
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name == NULL)
			printf("Name: (nil)");
		if ((*d).owner == NULL)
			printf("Owner: (nil)");
		printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
	}
}
