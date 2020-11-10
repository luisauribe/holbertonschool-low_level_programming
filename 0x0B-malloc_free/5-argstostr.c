#include "holberton.h"
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: Numbers of arguments.
 * @av: String of a argument.
 *
 * Return: always void.
 */
char *argstostr(int ac, char **av)
{
	char *point;
	int i, j;
	int k = 0;
	int total = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
			continue;
		}
		total += j;
	}
	point = malloc(sizeof(char) * (total + ac + 1));
	if (point == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			point[k] = av[i][j];
			k++;
		}
		point[k] = '\n';
		k++;
	}
	return (point);
}
