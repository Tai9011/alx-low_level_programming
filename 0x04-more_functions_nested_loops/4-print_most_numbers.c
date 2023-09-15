#include "main.h"
/**
 * print_most_numbers - prints
 */
void print_most_numbers(void)
{
	int f = 0;

	while (f <= 9)
	{
		if (f != 2 && f != 4)
		{
			_putchar(f + 48);
			f++;
		}
		else
			f++;
	}
	_putchar('\n');
}
