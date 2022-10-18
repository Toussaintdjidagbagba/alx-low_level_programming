#include "main.h"

/**
 * print_alphabet - Print alphabet
 * Return 0
 */
void print_alphabet(void)
{
	char i;
	int a;

	for (a = 0; a < 10; a++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}