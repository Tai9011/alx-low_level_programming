#include<stdio.h>
/**
 * main - entry point
 * description: a function that prints single digit numbers
 * Return: returns a value of 0 (success)
 */
int main(void)
{
	int nb = 0;

	while (nb < 10)
	{
		printf("%d", nb);
		nb++;
	}
	printf("\n");
	return (0);
}
