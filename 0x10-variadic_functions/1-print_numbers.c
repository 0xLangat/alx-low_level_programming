#include "variadic_functions.h"

/**
 * print_numbers - print numbers followed by a new line
 *
 * @separator: The string to be printed between numbers
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, len;
	int num;
	va_list ap;

	len = 0;
	while (separator[len] != '\0')
		len++;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		printf("%d", num);

		if (separator != NULL)
		{
			if (i != (n - 1))
			{
				printf("%s", separator);
			}
		}
	}

	printf("\n");

}
