#include "main.h"
/**
 *
 *
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
	{
		while (y--)
			return (x * _pow_recursion(x, y));
	}
	return (0);
}
