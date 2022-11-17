#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - prints numbers
* @separator: pointer to the string to be printed between numbers
* @n: number of integers passed to the function
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;

	va_start(arguments, n);

	for (i = 0; i < (n - 1) && n != 0; i++)
	{
		if (!separator)
			printf("%d", va_arg(arguments, int));
		else
			printf("%d%s", va_arg(arguments, int), separator);
	}

	if (n)
		printf("%d\n", va_arg(arguments, int));
	else
		printf("\n");

	va_end(arguments);
}
