#include "main.h"
#include<stdio.h>
/**
 * print_to_98 - print
 * @n: variable
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		_putchar((n / 10) + 48);
		_putchar((n % 10) + 48);
		if (n != 98)
		{
		_putchar(',');
		_putchar(' ');
		}
		n++;
	}
	while (n > 98)
	{
		
		_putchar((n / 10) + 48);
		_putchar((n % 10) + 48);
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n--;
	}

}
