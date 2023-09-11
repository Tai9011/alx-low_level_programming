#include<stdio.h>
/**
 * main - test point
 * description: function that prints combinations
 * of single digit numbers
 * Return: always returns a value of 0 (success)
 */
int main(void)
{
	int dg = 0;

	while (dg =< 9)
	{
		putchar('0' + dg);
		dg++;
	}
	if (dg != 9)
	{
		putchar(44);
		putchar(32);
	}
	putchar('\n')
	return (0);
}
