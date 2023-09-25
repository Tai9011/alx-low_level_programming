#include "main.h"
/**
 * puts2 - print
 * @str: variable
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
		_putchar('\n')
	}
}
