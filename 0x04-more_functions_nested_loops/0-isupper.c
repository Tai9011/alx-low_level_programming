#include "main.h"
/**
 * _isupper - detects uppercase
 * @c: integer
 * Return: returns 0 or 1
 */
int _isupper(int c)
{
	int c = 65;

	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
