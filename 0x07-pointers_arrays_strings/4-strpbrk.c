#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any set of bytes
 *
 * @s: The string to be searched
 * @accept: The bytes to be searched
 *
 * Return: the pointer to the bytes found
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}

	return (NULL);
}
