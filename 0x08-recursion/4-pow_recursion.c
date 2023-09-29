#include "main.h"
/**
 * _pow_recursion - recursive function
 * @x: integer
 * @y: integer
 * Return: return 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y));
		y--;
	return (0);
}
