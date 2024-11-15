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
			(*d).name = "(nil)";
		if ((*d).age <= 0);
			(*d).age = 0;
		if ((*d).owner == NULL)
			(*d).owner = "(nil)";
		printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
	}
}
