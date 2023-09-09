#include<stdio.h>
/**
 * main - entry point
 * description: a function that prints single digit numbers
 * using putchar
 * Return: always returns a value of 0 (success)
 */
int main(void)
{
	int di = 0;

	while (di < 10)
	{
		putchar(di);
		di++;
	}
	putchar('\n');
	return (0);
}

