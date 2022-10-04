#include "main.h"

/**
 * _strcat - concatenate two strings
 *
 * @dest: The pointer to the first string
 * @src: The pointer to the second string
 *
 * Return: Pointer to the final string (dest)
 */
char *_strcat(char *dest, char *src)
{
	int len1, len2, i, j;

	len1 = 0;
	while (dest[len1] != '\0')
	{
		len1++;
	}

	len2 = 0;
	while (src[len2] != '\0')
	{
		len2++;
	}

	j = 0;
	for (i = len1; i < (len1 + len2); i++)
	{
		dest[i] = src[j];
		j++;
	}

	return (dest);
}
