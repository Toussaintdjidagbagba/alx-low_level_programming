#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @s: string 
 *
 * Return: address of s
 */
char *string_toupper(char *s)
{
	int i = 0;

	for (; *(s + i); i++)
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
	}
	return (s);
}
