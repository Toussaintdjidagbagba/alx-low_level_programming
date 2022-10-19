#include <stdio.h>


/**
 * _length - returns the lenth of string
 * @num : operand number
 * Return: number of digits
 */
int _length(int num)
{
	int length = 0;

	if (!num)
	{
		return (1);
	}

	while (num)
	{
		num = num / 10;
		length += 1;
	}

	return (length);
}


/**
 *  main - prints the first 98 fibonaci sequences
 *  Return: 0
 */
int main(void)
{
	unsigned long f1 = 1, f2 = 2, tmp, mx = 100000000, _f1 = 0, _f2 = 0, _temp = 0;
	short int i = 1, initi;

	while (i <= 98)
	{
		if (_f1 > 0)
			printf("%lu", _f1);
		initi = _length(mx) - 1 - _length(f1);
		while (_f1 > 0 && initi > 0)
		{
			printf("%i", 0);
			initi--;
		}
		printf("%lu", f1);

		tmp = (f1 + f2) % mx;
		_temp = _f1 + _f2 + (f1 + f2) / mx;
		f1 = f2;
		_f1 = _f2;
		f2 = tmp;
		_f2 = _temp;

		if (i != 98)
			printf(", ");
		else
			printf("\n");
		i++;
	}
	return (0);
}
