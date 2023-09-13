#include "main.h"
/**
 * _abs - prints absolute value
 * @nb: variable
 * Return: always returns 0
 */
int _abs(int nb)
{
	if (nb >= 0)
		_putchar(nb + 48);
	else if (nb == 0)
		_putchar('0' + 48);
	else
	{
		int nb2 = nb + (nb * 2);

		_putchar(nb2 + 48);
	}
	return (0);
}
