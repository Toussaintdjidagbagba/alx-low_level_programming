#include "main.h"

/**
 * _strncpy - copies n bytes of string
 * @dest: string finaly
 * @src: string source copied
 * @n: largest number of bytes to copy
 *
 * Return: address of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	for (i = 0; i < n; i++)
	{
		if (*(src + i))
			*(dest + i) = *(src + i);
		else
			*(dest + i) = '\0';
	}
	return (dest);
}
