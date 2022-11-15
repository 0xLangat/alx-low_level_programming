#include "main.h"
#include <stddef.h>

/**
 * _strstr - locate a substring
 *
 * @haystack: the larger string
 * @needle: the substring
 *
 * Return: pointer to start of the haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i, s;

	s = 0;
	while (needle[s] != '\0')
		s++;

	while (*haystack != '\0')
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}

		if (i != s)
			haystack++;
		else
			return (haystack);
	}

	return (NULL);
}
