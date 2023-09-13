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
	else
	{
		int nb = nb * -1;

		_putchar(nb);
	}
	return (0);
}
