#include "function_pointers.h"

/**
* int_index - searches for an integer
* @array: An array of integers
* @size: Number of elements in the @array
* @cmp: Pointer to the function
* Return: the index of the first element for which
* the cmp function (SUCCESS) or
* -1 no element matches and If size <= 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
