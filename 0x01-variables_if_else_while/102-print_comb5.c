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
	int dg0 = 0;
	int dg00;

	while (dg0 <= 9)
	{
		dg00 = 0;
		while (dg00 <= 9)
		{
			dg1 = 0;
			while (dg1 <= 9)
			{
				dg2 = 0;
				while (dg2 <= 9)
				{
					putchar(dg0 + 48);
					putchar(dg00 + 48);
					putchar(' ');
					putchar(dg1 + 48);
					putchar(dg2 + 48);
					putchar(',');
					putchar(' ');
					dg2++;
				}
				dg1++;
			}
			dg00++;
		}
		dg0++;
	}
	return (0);
}
