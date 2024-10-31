#include "main.h"

/**
 **_strcat - function to concatenate two strings
 * @dest: the string that gets another string at the end of it
 * @src: the string that gets appended
 *  
 * Return: pointer to result string dest
 */
char *_strcat(char *dest, char *src)
{
        int i = 0, j = 0;

        while (dest[i] != '\0')
        {
                i++;
        }

        while (src[j] != '\0')
        {
                dest[i + j] = src[j];
                j++;
        }
        dest[i + j] = '\0';

        return dest;
}
