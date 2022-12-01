#include "main.h"

/**
 * flip_bits - number of bits you would need to flip to
 * get from one number to another.
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int act;
	unsigned long int excl = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		act = excl >> i;
		if (act & 1)
			count++;
	}

	return (count);
}
