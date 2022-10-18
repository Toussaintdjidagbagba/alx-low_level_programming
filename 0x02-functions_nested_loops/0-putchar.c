#include "main.h"

/**
 * main - Prints the _putchar
 * Return : 0
 */
int main(void)
{
	char pc[] = "_putchar";
	int i;
	
	for (i = 0; pc[i] != '\0'; i++)
	{
		_putchar(pc[i]);
	}

	_putchar('\n');
	return (0);
}