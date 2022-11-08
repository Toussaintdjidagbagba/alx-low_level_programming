#include <stdlib.h>

/**
* alloc_grid - Creates a 2 dimensional array of integers
*
* @width: rows of the 2D array
*
* @height: columns of the 2D array
*
* Return: Pointer to a 2 dimenstional array of integers or If width or 
* height is 0 or negative, return NULL
*/

int **alloc_grid(int width, int height)
{
	int i, j, k, **am;

	if (width <= 0 || height <= 0)
		return ('\0');

	am = malloc(sizeof(int *) * height);

	if (am == NULL)
	{
		free(am);
		return ('\0');
	}

	for (i = 0; i < height; i++)
	{
		am[i] = malloc(sizeof(int) * width);

		if (am[i] == NULL)
		{
			for (k = i; k >= 0; k--)
				free(am[k]);

			free(am);
			return ('\0');
		}

		for (j = 0; j < width; j++)
			am[i][j] = 0;
	}

	return (am);
}
