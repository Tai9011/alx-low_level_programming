#include "main.h"
/**
 * times_table - multiplication
 */
void times_table(void)
{
	int nb = 0;

	while (nb <= 9)
	{
		int multi = 0;

		while (multi <= 9)
		{
			multi = multi * nb;
			_putchar(multi);
			_putchar(',');
			_putchar(' ');
			multi++;
		}
		_putchar('\n');
		nb++;
	}
}
