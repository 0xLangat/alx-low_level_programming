#include "main.h"

/**
 * _islower - Check if a character is lowercase
 *
 * @c: The character to be checked
 *
 * Return: 1 is returned if true and 0 is returned if false
 */

int _islower(int c)
{
	int i;
	int result;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			result = 1;
		}

	}

	if (result == 1)
		return (1);
	else
		return (0);
}
