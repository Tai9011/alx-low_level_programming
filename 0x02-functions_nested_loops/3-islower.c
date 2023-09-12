#include "main.h"
/*
 * int _islower(int c) - a function that detects lowercase
 * _islower: checks whether a letter is lowercase
 * Return: returns 1 when lower and returns 0 when not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
