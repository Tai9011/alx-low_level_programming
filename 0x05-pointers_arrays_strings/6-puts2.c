#include "main.h"
/**
 * puts2 - print
 * @str: variable
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *str != '\0'; ++i)
	{
		_putchar(str[i] + 0);
		i++;
	}
	_putchar('\n');
}
