#include <stdlib.h>

/**
* str_concat - Concatenate two strings
*
* @s1: A string one
*
* @s2: A string two
*
* Return: pointer should point to a newly allocated space in 
* memory which contains the contents of s1, followed by the 
* contents of s2, and null terminated
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int lens1 = 0;
	unsigned int lens2 = 0;
	char *all;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + lens1) != '\0')
		lens1++;

	while (*(s2 + lens2) != '\0')
		lens2++;

	all = malloc(1 + (lens1 * sizeof(*s1)) + (lens2 * sizeof(*s2)));
	if (all == NULL)
		return ('\0');

	for (i = 0; i < lens1; i++)
		all[i] = *(s1 + i);

	for (j = 0; j < lens2; j++, i++)
		all[i] = *(s2 + j);

	return (all);
}
