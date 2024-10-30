#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i, j, len = 0, tmp;

	while (s[len] != '\0')
	{
		len++;
	}
	
	/* We go through half the lenght of the array */
	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		tmp = s[i]; /* Store the first half of the array */ 
		s[i] = s[j]; /* Attributes the last half to the first half (in reverse) */
		s[j] = tmp; /* Attributes the stored value of the first half to the last half (in reverse) */
	}
}
