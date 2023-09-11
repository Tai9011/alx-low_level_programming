#include<stdio.h>
/**
 * main - entry point
 * description: print nbs. 1 to 99
 * Return: always returns a value of 0 (success)
 */
int main(void)
{
	int dg1 = 0;
	int dg2;

	while (dg1 <= 9)
	{
		dg2 = 0;
		while (dg2 <= 9)
		{
			dg2++;
			putchar(dg1 + 48);
			putchar(dg2 +48);
			putchar(',');
			putchar(' ');
		}
		dg1++;
	}
	putchar('\n');
	return (0);
}
