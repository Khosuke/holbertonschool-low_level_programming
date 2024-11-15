#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Function that return the lenght of a string
 * @s: the string of char
 *
 * Return: the lenght of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * new_dog - Create a new dog structure
 * @name: new name for new dog
 * @age: new age for new dog
 * @owner: new owner for new dog
 *
 * Return: Return the new dog created
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name, len_owner, i = 0, j = 0;
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	len_name = _strlen(name);
	len_owner = _strlen(owner);
	new_dog->name = malloc(len_name + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(len_owner + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	while (i < len_name)
	{
		new_dog->name[i] = name[i];
		i++;
	}
	new_dog->name[i] = '\0';
	while (j < len_owner)
	{
		new_dog->owner[j] = owner[j];
		j++;
	}
	new_dog->owner[j] = '\0';
	new_dog->age = age;
	return (new_dog);
}
