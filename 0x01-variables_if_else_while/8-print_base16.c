#include<stdio.h>
/**
 * main - entry point
 * description: fumction that prints base 16 digits
 * Return: always returns a value of 0 (success)
 */
int main(void)
{
	char dg = 0;
	char ag = 'A';
	while (dg <= 9)
	{	
		putchar(dg + '0');
		dg++;
	}
	while (ag <= 'F')
	{
		putchar(ag + '0');
		ag++;
	}
	putchar('\n');
	return (0);
}
