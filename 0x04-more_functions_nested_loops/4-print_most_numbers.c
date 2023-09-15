#include "main.h"
/**
 * print_most_numbers - prints
 */
void print_most_numbers(void)
{
	int f = 48;

	while (f <= 57)
	{
		if (f != 2 && f != 4)
		{
			_putchar(f);
			f++;
		}
		else
			f++;
	}
	_putchar('\n');
}
