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

        while (ch != 'q'&& ch != 'e')
	{
		putchar(ch);
		ch++;
	}
        putchar('\n');
        return (0);

}
