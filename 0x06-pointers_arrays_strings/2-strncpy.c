#include "main.h"

/**
 * _strncpy - copy a string
 *
 * @dest: The pointer to the new buffer
 * @src: The pointer to the string to be copied
 * @n: The number of bytes
 *
 * Return: The pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len;

	for (len = 0; len < n && src[len] != '\0'; len++)
	{
		dest[len] = src[len];
	}

	if (len < n)
		dest[len] = '\0';

	return (dest);
}
