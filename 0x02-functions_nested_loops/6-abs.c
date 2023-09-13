#include "main.h"
/**
 * _abs - prints absolute value
 * @int: variable
 * Return: always returns 0
 */
int _abs(int)
{
	int nb;

	if (nb >= 0)
		_putchar(nb);
	else
		_putchar(nb * -1);
	return (0);
}
