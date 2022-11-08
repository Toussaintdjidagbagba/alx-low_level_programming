#include <stdlib.h>

/**
* _strdup - Copies a string to new allocated space in memory
*
* @str: The string to be copied
*
* Return: (success) the _strdup function returns a pointer
* to the duplicated string
* OR NULL if @str is empty (FAILURE) OR
* NUL if insufficient memory was available
*/

char *_strdup(char *str)
{
	char *am;
	unsigned int i;
	unsigned int len = 0;

	if (str == NULL)
		return ('\0');

	while (*(str + len) != '\0')
		len++;

	len++;

	am = malloc(sizeof(*str) * len);

	if (am == NULL)
		return ('\0');

	for (i = 0; i < len; i++)
		am[i] = *(str + i);

	am[i] = '\0';

	return (am);
}
