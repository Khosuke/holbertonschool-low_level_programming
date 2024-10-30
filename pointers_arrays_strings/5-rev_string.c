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
		s[i] = s[j]; /* Attributes the last half to first half (reversed) */
		s[j] = tmp; /* Attributes stored value of first half to last half (reversed) */
	}
}
