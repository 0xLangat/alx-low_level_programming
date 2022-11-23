#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program
 *
 * @ac: the number of arguments passed
 * @av: the array of strings passed
 *
 * Return: pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, l;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			k++;
		}
	}

	str = malloc(sizeof(char) * (k + 1 + ac));
	if (str == NULL)
	{
		return (NULL);
	}

	l = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*(str + l) = av[i][j];
			l++;
		}

		*(str + l) = '\n';
		l++;
	}

	*(str + l) = '\0';

	return (str);
}
