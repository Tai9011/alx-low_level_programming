#include "main.h"
#include<stdio.h>
/**
 * _isupper - detects uppercase
 * @c: integer
 * Return: returns 0 or 1
 */
int _isupper(int c)
{
	c = 'A';

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
