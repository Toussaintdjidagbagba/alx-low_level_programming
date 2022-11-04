#include "main.h"

/**
 * _strcat - concat two chaines
 * @dest: destination.
 * @src: source.
 * Return: a pointer to the resulting
 */
char *_strcat(char *dest, char *src)
{
	int il = 0, il2 = 0;

	while (*(dest + il) != '\0')
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
	}
	return (dest);
}
