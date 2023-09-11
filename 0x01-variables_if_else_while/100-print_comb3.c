#include<stdio.h>
/**
 * main - entry point
 * description: a code that prints combinations of 2 numbers
 * Return: always returns a value of 0 (success)
 */
int main(void)
{
	int s = 0;
	int r = 1;

	while (s <= 9)
	{
		r = 0;
		while (r <= 9)
		{
			if (r != s && r > s)
			{
				putchar(s + 48);
				putchar(r + 48);
				if (r + s != 17)
				{
					putchar(44);
					putchar(32);
				}
			}
			r++;
		}
		s++;
	}
	putchar('\n');
	return (0);
}
