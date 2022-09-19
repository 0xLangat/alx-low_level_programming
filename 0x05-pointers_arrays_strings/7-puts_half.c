#include "main.h"

/**
 * puts_half - print the second half of a string
 *
 * @str: the string to be printed
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i;
	int j;
	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (j = len / 2; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}

		_putchar('\n');
	}
	else
	{
		for (j = ((len - 1) / 2); str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}

		_putchar('\n');
	}
}
