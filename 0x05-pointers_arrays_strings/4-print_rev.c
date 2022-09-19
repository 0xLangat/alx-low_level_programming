#include "main.h"

void print_rev(char *s)
{
	int i;
	int len = 0;
	int j;

	for (i = 0; s[i] != '\0'; i++)
		len = len + 1;

	for (j = len; j >= 0; j--)
		_putchar(s[j]);

	_putchar('\n');
}
