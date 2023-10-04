#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: the number of arguments.
 * @av: an array of argument strings.
 *
 * Return: pointer to the concatenated string, or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
char *concatenated;
int i, j, total_len = 0, k = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			total_len++;
		}
	total_len++;
	}

	concatenated = (char *)malloc(sizeof(char) * (total_len + 1));

	if (concatenated == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			concatenated[k++] = av[i][j];
		}

		concatenated[k++] = '\n';
	}

	concatenated[k] = '\0';

	return (concatenated);
}
