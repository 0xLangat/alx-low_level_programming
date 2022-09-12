#include <stdio.h>

/**
 * main - Print the lowercase alphabet in reverse followed,
 * by a newline
 *
 * Return: Always return 0
 */
int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
		putchar(alph);

	putchar('\n');
	return (0);
}
