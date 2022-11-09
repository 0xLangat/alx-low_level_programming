#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long first, sec, next, i;

	first = 0;
	sec = 1;

	for (i = 0; i < 98; i++)
	{
		next = first + sec;
		printf("%lu", next);
		first = sec;
		sec = next;

		if (i == 97)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
