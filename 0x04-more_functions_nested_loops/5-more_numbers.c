#include "main.h"
/**
 * more_numbers - print
 */
void more_numbers(void)
{
	int nb;
	int i = 0;
	int dg;

	while (i <= 9)
	{
		while (nb <= 14)
		{
			dg = nb;
			if (nb > 9)
			{
				_putchar(1 + 48);
				dg = nb % 10;
			}
			_putchar(dg + 48);
			nb++;

		}
		i++;
		_putchar('\n');
	}
}
