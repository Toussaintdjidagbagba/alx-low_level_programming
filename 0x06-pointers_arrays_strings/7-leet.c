#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: address of s
 */
char *leet(char *s)
{
	int i = 0, j = 0;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (; *(s + i); i++)
	{
		for (; j <= 9; j++)
		{
			if (a[j] == *(s + i))
				*(s + i) = b[j];
		}
	}
	return (s);
}
