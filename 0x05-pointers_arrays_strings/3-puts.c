#include "main.h"
/**
 * _puts - prints string
 * @str: string
 */
void _puts(char *str)
{
	int nb;

	for (nb = 0; *str != '\0'; str++)
	{
		int i = 0;

		_putchar(str[i]);
		i++;
	}
}
