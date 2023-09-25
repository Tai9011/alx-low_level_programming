#include "main.h"
/**
 * print_rev - prints reverse
 * @s: variable
 */
void print_rev(char *s)
{
	 for (*s = '\0'; *s >= 0; s--)
		 _putchar(*s + 0);
	 _putchar ('\n');
}
