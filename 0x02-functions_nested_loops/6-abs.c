#include "main.h"
/**
 * _abs - prints absolute value
 * @nb: variable
 * Return: always returns 0
 */
int _abs(int nb)
{
	if (nb >= 0)
		_putchar(nb);
	else if (nb == 0)
		_putchar(0);
	else
	{
		int nb2 = nb + (nb * 2);

		_putchar(nb2);
	}
	return (0);
}
