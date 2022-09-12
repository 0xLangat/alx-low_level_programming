#include <stdio.h>

/**
 * main - Print the alphabet in lowercase and in uppercase
 *
 * Return: Always return 0
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);

	for (alph = 'A'; alph <= 'Z'; alph++)
		putchar(alph);

	putchar('\n');
	return (0);
}
