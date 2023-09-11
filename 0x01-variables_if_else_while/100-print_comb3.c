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

	while (s <= 9 && r <= 9)
	{
		putchar(s + 48);
		putchar(r + 48);
		putchar(44);
		putchar(32);
		if (r == 9)
		{
			r = 0;
			r++;
			s++;
		} else
			r++;
		if (r == s || s > r)
			r++;
	}
	putchar('\n');
	return (0);
}
