#include "main.h"
#include <stdio.h>

/**
* print_diagsums -  prints the sum of the two diagonals of a square matrix of integers.
*
* @a: Pointer to an array
*
* @size: Size of the matrix
*
* Return: void
*/
void print_diagsums(int *a, int size)
{
	int i;
	int b = 0;
	int c = 0;

	for (i = 0; i < size; i++)
	{
		b += a[i];
		c += a[size - i - 1];
		a += size;
	}
	printf("%d, ", b);
	printf("%d\n", c);
}
