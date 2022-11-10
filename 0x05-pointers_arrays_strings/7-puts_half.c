#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: the string to be printed
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int len, i, j;

	len = 0;
	while (str[len] != '\0')
		len++;

	i = len / 2;

	if (len % 2 != 0)
		i++;

	for (j = i; j < len; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
