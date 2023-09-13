#include "main.h"
/**
 * times_table - multiplication
 */
void times_table(void)
{
	int nb = 0;

	while (nb <= 57)
	{
		int multi = 48;

		while (multi <= 57)
		{
			int prod;

			prod = multi * nb;
			_putchar(',');
			_putchar(' ');
			if (prod <= 9)
				putchar(' ');
			else
				_putchar((prod / 10) + 48);
			_putchar((prod % 10) + 48);
			multi++;
		}
		_putchar('\n');
		nb++;
	}
}
