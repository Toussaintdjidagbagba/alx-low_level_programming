#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * Description: prints every minute of the day
 * Return: void
 */
void jack_bauer(void)
{
	int ht, ho, mt, mo, hm;

	hm = 58;
	ht = '0';
	while (ht < '3')
	{
		if (ht == '2')
		{
			hm = '4';
		}
		ho = '0';
		while (ho < hm)
		{
			mt = '0';
			while (mt < '6')
			{
				mo = '0';
				while (mo < 58)
				{
					_putchar(ht);
					_putchar(ho);
					_putchar(':');
					_putchar(mt);
					_putchar(mo);
					_putchar('\n');
					mo++;
				}
				mo = '0';
				mt++;
			}
			mt = '0';
			ho++;
		}
		ho = '0';
		ht++;
	}
}
