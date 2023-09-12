#include "main.h"
/**
 * _islower - checks lowercase
 * @c: description
 * Return: returns 1 when lower and returns 0 when not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
