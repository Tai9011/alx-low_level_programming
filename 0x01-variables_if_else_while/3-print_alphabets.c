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
	char sh = 'A';

        for (ch = 'a'; ch <= 'z'; ch++)
                putchar(ch);
	for (sh = 'A'; sh <= 'Z'; sh++)
                putchar(sh); 
        return (0);

}
