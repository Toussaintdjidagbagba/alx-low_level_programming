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
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}