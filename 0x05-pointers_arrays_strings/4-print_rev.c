#include "main.h"

/**
 * print_rev - Print a string in reverse
 *
 * @s: The string
 */
void print_rev(char *s)
{
	int counter, i;

	counter = 0;
	while (s[counter] != '\0')
	{
		counter++;
	}

	for (i = counter - 1; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
