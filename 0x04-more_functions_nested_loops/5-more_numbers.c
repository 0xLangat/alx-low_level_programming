#include "main.h"


/**
 * more_numbers - Print numbers 0 to 14 10 times
 */
void more_numbers(void)
{
	int counter;
	int num;

	counter = 0;

	while (counter < 10)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}

		_putchar('\n');

		counter++;
	}
}
