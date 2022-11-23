#include "main.h"

/**
 * str_concat - concatenate two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}

	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}

	str = malloc((len1 + len2 + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		*(str + i) = *(s1 + i);
	}

	for (j = 0; j < len2; j++)
	{
		*(str + i) = *(s2 + j);
		i++;
	}

	*(str + len1 + len2 + 1) = '\0';

	return (str);
}
