#include "main.h"
/**
 * _isalpha -function
 * @c: variable
 * Return: returns 1 or 0
 */
int _isalpha(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	else if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}
