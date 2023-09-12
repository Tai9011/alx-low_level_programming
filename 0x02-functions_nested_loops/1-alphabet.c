#include<stdio.h>
#include<unistd.h>
#include "main.h"
/**
 * print_alphabet - prints the alphabet
 * Return: returns the value given
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
	}
	_putchar('\n');
}
