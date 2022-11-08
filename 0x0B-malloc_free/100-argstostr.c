#include <stdlib.h>

/**
* argstostr - concatenates all the arguments of your program.
*
* @ac: Argument total c
*
* @av: Pointer to arguments
*
* Return: Pointer to new string or
* NULL if ac == 0 or av == NULL
* NULL if if insufficient memory was available
*/

char *argstostr(int ac, char **av)
{
	int i, j, c = 0, rc = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return ('\0');

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			rc++;

		rc++;
	}

	result = malloc(sizeof(char) * rc + 1);

	if (result == NULL)
	{
		return ('\0');
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[c++] = av[i][j];
		}
		result[c++] = '\n';
	}

	result[rc] = '\0';
	return (result);
}
