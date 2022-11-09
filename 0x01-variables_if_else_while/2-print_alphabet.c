#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 *
 * Return: On succes 0
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
	}

	putchar('\n');

	return (0);
}
