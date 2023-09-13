#include "main.h"
void print_times_table(int n)
{
	/*[200~Write a function that prints the n times table, starting with 0.
	 *
	 * Prototype: void print_times_table(int n);
	 * If n is greater than 15 or less than 0 the function should not print anything
	 * Format: see example
	 */
	int n = 0;
	int nb = n;
	int multiply;

	for (n = 0; n < nb; n++)
	{
		multiply = n * nb;
		if (n > 15 || n < 0)
		{
			return (0);
		}
		else if (n > 10)
		{
			_putchar((n / 10) + 48);
			_putchar((n % 10) + 48);

		}
		else
			_putchar(

	}
}
