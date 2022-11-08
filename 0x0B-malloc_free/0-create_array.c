#include <stdlib.h>

/**
* create_array - creates an array of chars, and initializes it with a specific
* char @c
*
* @size: Size of the array of chars to be created
*
* @c: Char value to initialize the array with
*
* Return: a pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return ('\0');

	arr = malloc(size);

	if (arr == NULL)
		return ('\0');

	for (i = 0; i < size; i++)
		arr[i] = c;

	arr[size] = '\0';

	return (arr);
}
