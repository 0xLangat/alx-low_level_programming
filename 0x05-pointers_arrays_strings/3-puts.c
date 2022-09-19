#include "main.h"
#include <string.h>

/**
 * _puts - print a string
 *
 * @str: the string to be printed
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
