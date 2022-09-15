#include "main.h"
#include <string.h>

/**
 * print - print the word "_putchar"
 *
 * @a: store the string to be printed
 * @len: store the length of the string
 * @i: the iterable variable
 *
 * Return: Always return 0
 */
int print(void)
{
	char a[] = "_putchar";

	int len = strlen(a);
	int i;
	for (i = 0; i < len; i++)
	{
		_putchar(a[i]);
	}

	_putchar('\n');

	return (0);
}
