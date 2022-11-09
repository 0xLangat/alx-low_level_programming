#include <stdio.h>

/**
 * main - prints the alphabet in lowercase in reverse
 *
 * Return: On success 0
 */
int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
	{
		putchar(alp);
	}

	putchar('\n');

	return (0);
}
