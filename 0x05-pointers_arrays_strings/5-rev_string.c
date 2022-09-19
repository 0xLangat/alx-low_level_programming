#include "main.h"

/**
 * rev_string - Print a string in reverse
 *
 * @s: The string to be printed
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i;
	int j;
	int temp;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	for (j = 0; j < len; j++)
	{
		len--;
		temp = s[j];
		s[j] = s[len];
		s[len] = temp;
	}
}
