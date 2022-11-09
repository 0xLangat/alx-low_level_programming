#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 *
 * Return: On success 0
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'q' && alph != 'e')
		{
			putchar(alph);
		}
	}

	putchar('\n');

	return (0);
}
