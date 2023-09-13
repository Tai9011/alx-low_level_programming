#include "main.h"
/**
 * print_last_digit - prints
 * @last: variable
 * Return: returns last
 */
int print_last_digit(int last)
{
	if (last >= 0)
	{
		last = last % 10;
		_putchar(last + 48);
	}
	else
	{
		last = -1 * (last % 10);
		_putchar(last + 48);
	}
	return (last);
}
