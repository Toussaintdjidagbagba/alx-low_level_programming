#include "main.h"

/**
 * _strncat - appends src to the dest string
 * @dest: string to append by src
 * @src: string to append to dest
 * @n: largest number of bytes to append
 *
 * Return: address of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int il = 0, il2 = 0, p = 0;

	while (*(dest + il) != '\0' && p < n)
	{
		il++;
	}

	while (il2 >= 0)
	{
		*(dest + il) = *(src + il2);
		if (*(src + il2) == '\0')
			break;
		il++;
		il2++;
		p++;
	}
	return (dest);
}
