#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: The first pointer to the string
 * @src: The second pointer
 * @n: The number of bytes to be used atmost
 *
 * Return: Pointer to final string (dest)
 */
char *_strncat(char *dest, char *src, int n)
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
	for (i = len1; i < (len1 + n); i++)
	{
		dest[i] = src[j];
		j++;
	}

	return (dest);
}
