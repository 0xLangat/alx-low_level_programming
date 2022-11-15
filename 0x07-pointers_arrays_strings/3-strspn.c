#include "main.h"
#include <stddef.h>

/**
 * _strspn - get the lenght of a prefix substring
 *
 * @s: The string
 * @accept: the substring
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, counter;

	counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					counter++;
					break;
				}
			}
		}
		else
		{
			return (counter);
		}
	}

	return (counter);
}
