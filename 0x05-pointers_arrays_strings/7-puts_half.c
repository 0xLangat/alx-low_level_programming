#include "main.h"

/**
 * puts_half - Print second half of a string
 *
 * @str: The pointer to the string
 */
void puts_half(char *str)
{
	int len, j;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	j = len / 2;

	if (len % 2 == 1)
	{
		j++;
	}

	while (j < len)
	{
		_putchar(str[j]);
		j++;
	}

	_putchar('\n');
}
