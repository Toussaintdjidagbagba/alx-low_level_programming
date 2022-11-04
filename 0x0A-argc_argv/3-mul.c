#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void see_numb(int n);

/**
* main - Entry point
*
* @argc: Length of @argv
*
* @argv: Array of strings of the arguments of this program
*
* Return: 0, Success
*/

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		see_numb(atoi(argv[1]) * atoi(argv[2]));
		_putchar('\n');
		return (0);
	}
	else
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (0);
	}
}

/**
* see_numb - Prints numbers chars
*
* @n: Integers params
*
* Return: 0
*/

void see_numb(int n)
{
	unsigned int n1;

	n1 = n;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}

	if (n1 / 10 != 0)
	{
		see_numb(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
}
