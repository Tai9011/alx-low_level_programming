#include "main.h"
/**
 * times_table - multiplication
 */
void times_table(void)
{
	int nb;

	for (nb = 0; nb <= 9; nb++)
	{
		int multi;

		for (multi = 0; multi <= 9; multi++)
		{
			multi = multi * nb;
			_putchar(multi);
			_putchar(',');
			_putchar(' ');
		}
		putchar('\n');
	}
}
