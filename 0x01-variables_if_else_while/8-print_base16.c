#include<stdio.h>
/**
 * main - entry point
 * description: fumction that prints base 16 digits
 * Return: always returns a value of 0 (success)
 */
int main(void)
{
	char dg = 30;
	char ag = 42;
	while (dg <= 39)
	{	
		putchar(dg + '0');
		dg++;
	}
	while (ag <= 46)
	{
		putchar(ag + '0');
		ag++;
	}
	putchar('\n');
	return (0);
}
