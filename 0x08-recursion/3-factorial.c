#include "main.h"
/**
 * factorial - prints factorial
 * @n: integer
 * Return: returns based on value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
