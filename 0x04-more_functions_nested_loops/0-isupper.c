#include "main.h"
#include<stdio.h>
/**
 * _isupper - detects uppercase
 * @c: integer
 * Return: returns 0 or 1
 */
int _isupper(int c)
{
	int c = 0;

	if (c >= 65 && c <= 90)
	{
		putchar('1' + 48);
		return (1);
	}
	else
	{
		putchar(48);
		return (0);
	}

}
