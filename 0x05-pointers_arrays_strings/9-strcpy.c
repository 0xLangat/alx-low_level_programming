#include "main.h"

/**
 * _strcpy - Copy a string to another pointer address
 *
 * @dest: The pointer to the new string
 * @src: The pointer to the old string
 *
 * Return: The string dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}

	len++;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
