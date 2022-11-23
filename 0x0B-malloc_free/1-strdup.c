#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: The string passed
 *
 * Return: On success return a pointer
 * On failure return NULL
 */
char *_strdup(char *str)
{
	int len, i;
	char *ch;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	ch = malloc((len + 1) * sizeof(char));
	if (ch == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		*(ch + i) = *(str + i);
	}

	ch[len + 1] = '\0';

	return (ch);
}
