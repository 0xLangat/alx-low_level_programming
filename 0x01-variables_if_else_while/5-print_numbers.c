#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 from 0
 *
 * Return: On success 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}

	printf("\n");

	return (0);
}
