#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long first, sec, next, sum;

	first = 0;
	sec = 1;
	sum = 0;

	while (1)
	{
		next = first + sec;
		if (sum > 4000000)
			break;

		if (next % 2 == 0)
		{
			sum += next;
		}
		first = sec;
		sec = next;
	}

	printf("%lu\n", sum);

	return (0);
}
