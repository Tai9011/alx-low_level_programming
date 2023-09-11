#include<stdio.h>
/**
 * main - entry point
 * description: function that prints comb of 3 dgs
 * Return: always returns a value of 0 (success)
 */
int main(void)
{
	int dg1 = 0;
	int dg2;
	int dg3;

	while (dg1 <= 9)
	{
		dg2 = 0;
		while (dg2 <= 9)
		{
			dg3 = 0;
			while (dg 3 <= 9)
			{
				if (dg1 != dg2 && dg2 != dg3 && dg1 < dg2 < dg3)
				{
					putchar(dg1 + 48);
					putchar(dg2 + 48);
					putchar(dg3 + 48);
					if (dg1 + dg2 + dg3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				dg3++;

			}
			dg2++;

		}
		dg1++;
	}

	return (0);
}
