#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}

	_putchar('\n');
}
