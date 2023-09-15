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
		nb = 0;
		while (nb <= 14)
		{
			_putchar(nb + 48);
			nb++;
		}
		if (i < 9)
		{
			_putchar('\n');
			i++;
		}
		else
			i++;
	}
}
