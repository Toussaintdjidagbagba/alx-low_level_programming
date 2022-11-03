#include "main.h"

/**
* factorial -  the factorial of a given number.
*
* @n: The number
*
* Return: An integer, the result of @n factorial
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
