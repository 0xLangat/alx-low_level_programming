#include "main.h"
#include <string.h>

/**
 * main - Prints "_putchar" followed by a new line
 *
 * Return: Always return 0
 */
int main(void)
{
	char str[] = "_putchar";

	int x;
	for (x = 0; x < strlen(str); x++)
		_putchar(str[x]);

	_putchar('\n');

	return (0);
}
