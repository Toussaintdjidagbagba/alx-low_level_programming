#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatenates two strings
*
* @s1: first string
* @s2: second string
* @n: the number of bytes to include of @s2
*
* Return: newly allocated space in memory;
* NULL if the function fails
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int i = 0, j = 0, m, p, k = 0, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (j > n)
		j = n;

	len = i + j;

	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);

	for (p = 0; p < i; p++)
		result[k++] = s1[p];
	for (m = 0; m < j; m++)
		result[k++] = s2[m];

	result[k] = '\0';
	return (result);
}
