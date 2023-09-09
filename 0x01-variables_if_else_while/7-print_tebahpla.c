#include<stdio.h>
/**
 * main - entry point
 * description: printing alphabet in reverse
 * Return: returns a value of 0 (success)
 */
int main(void)
{
	char c = 'z';

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
