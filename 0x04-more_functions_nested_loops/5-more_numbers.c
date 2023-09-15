#include "main.h"
/**
 * more_numbers - print
 */
void more_numbers(void)
{
	int nb;
	int i = 0;

	while (i <= 9)
	{
		while (nb <= 14)
		{
			if (nb > 9)
			{
				_putchar(1 + 48);
				_putchar((nb % 10) + 48);
			}
			nb++;

		}
		i++;
		_putchar('\n');
	}
}
