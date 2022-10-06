#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: the first string pointer
 * @s2: the second string pointer
 * @n: the number of bytes
 *
 * Return: On failure Null
 * On success pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j, index;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;

	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	if (len2 > n)
		len2 = n;

	str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
		return (NULL);

	index = 0;
	for (i = 0; i < len1; i++)
	{
		str[index] = s1[i];
		index++;
	}

	for (j = 0; j < len2; j++)
	{
		str[index] = s2[j];
		index++;
	}

	str[index] = '\0';

	return (str);
}
