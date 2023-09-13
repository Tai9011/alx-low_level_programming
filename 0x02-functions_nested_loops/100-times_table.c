#include "main.h"
/**
 * print_times_table - function
 * @nb: variable
 * @multiply: variable
 * Return: returns zero
 */
void print_times_table(int n)
{
	n = 0;
	int nb = n;

	for (n = 0; n < nb; n++)
	{
		multiply = n * nb;
		if (n > 15 || n < 0)
		{
			return (0);
		}
		else if (n > 10)
		{
			_putchar((multiply / 10) + 48);
			_putchar((multiply % 10) + 48);

		}
		else
			_putchar(multiply + 48);

	}
}
