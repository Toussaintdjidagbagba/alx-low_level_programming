#include "main.h"

/**
 * print_times_table - Prints a multiplication table up to param
 * @n: The number to be treated
 *
 * Return: Number matrix
 */
void print_times_table(int n)
{
    int row, column, product;

    if (n > 0 && n < 15)
    {
        for (row = 0; row <= n; row++)
        {
            for (column = 0; column <= n; column++)
            {
                product = row * column;
                if (product > 99)
                {
                    _putchar(',');
                    _putchar(32);
                    _putchar((product / 100) + '0');
                    _putchar(((product / 10) % 10) + '0');
                    _putchar((product % 10) + '0');
                }
                else if (product > 9)
                {
                    _putchar(',');
                    _putchar(32);
                    _putchar(32);
                    _putchar(((product / 10) % 10) + '0');
                    _putchar((product % 10) + '0');
                }
                else
                {
                    if (column != 0)
                    {
                        _putchar(',');
                        _putchar(32);
                        _putchar(32);
                        _putchar(32);
                    }
                    _putchar(product + '0');
                }
            }
            _putchar('\n');
        }
    }
}
