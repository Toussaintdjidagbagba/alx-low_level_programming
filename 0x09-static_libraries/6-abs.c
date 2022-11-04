#include "main.h"

/**
 * _abs - Code entry point.
 *
 * @nbr: nbr is number a positive or negative integer
 *
 * Description: A function that computes the absolute value of an integer.
 *
 * Return: int
 */
int _abs(int nbr)
{
	int result;

	if (nbr < 0)
	{
		result = nbr * -1;
		return (result);
	}
	else
	{
		result = nbr;
		return (result);
	}
}
