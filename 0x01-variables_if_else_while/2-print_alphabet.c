#include<stdio.h>
/**
 * main - main function
 * A function that prints the alphabet
 * in lower case
 * Return: always returns 0 (success)
 */
int main(void)
{
	char ch = 'a';
	for (ch='a'; ch<='z'; ch++)
		putchar(ch);
	return (0);

}

