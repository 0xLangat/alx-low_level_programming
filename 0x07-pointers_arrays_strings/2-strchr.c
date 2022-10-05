#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 *
 * @s: The pointer to the string
 * @c: The char to be located
 *
 * Return: On success the pointer to the char
 * On failure NULL
 */
char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
			return (s);

		if (*s == 0)
			return (NULL);
	}

	return (NULL);
}
