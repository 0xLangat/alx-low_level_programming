#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lowercase
 *
 * Return: On success 0
 */
int main(void)
{
	int num;
	char alp;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
	}

	for (alp = 'a'; alp <= 'f'; alp++)
	{
		putchar(alp);
	}

	putchar('\n');

	return (0);
}
