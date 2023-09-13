#include "main.h"
/**
 * times_table - multiplication
 */
void times_table(void)
{
	int nb = 0;

	while (nb <= 9)
	{
		int multi = 1;

		while (multi <= 9)
		{
			_putchar(48);

			int prod;

			prod = multi * nb;
			_putchar(',');
			_putchar(' ');
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);
			_putchar((prod % 10) + 48);
			multi++;
		}
		_putchar('\n');
		nb++;
	}
}
