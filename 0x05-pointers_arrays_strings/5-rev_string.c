#include "main.h"
/**
 * rev_string - reverse
 * @s: variable
 */
void rev_string(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
	{
		_putchar(s[i] + 0);
		i++;
	}
	_putchar('\n');
}
