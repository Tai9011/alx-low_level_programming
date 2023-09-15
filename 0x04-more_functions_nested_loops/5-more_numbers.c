#include "main.h"
/**
 * more_numbers - print
 */
void more_numbers(void)
{
	int nb = 0;
	int i = 0;

	while (i <= 9)
	{
		while (nb <= 14)
		{
			_putchar(nb + 48);
			nb++;
		}
		i++;
		_putchar('\n');
	}
}
