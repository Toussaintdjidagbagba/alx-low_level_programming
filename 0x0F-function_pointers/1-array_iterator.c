#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - function given as a parameter
* on each element of an array.
* @array: An array of paramters (values)
* @size: Size/length of @array
* @action: Pointer to a function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!action || !array)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
