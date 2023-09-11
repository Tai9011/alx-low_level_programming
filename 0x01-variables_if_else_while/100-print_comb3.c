#include<stdio.h>
/**
 *
 *
 *
 */
int main(void)
{
	int s = 0;
	int r = 1;
	
	while (s <= 9 && r <= 9)
	{
		if (r != 9)
		{
		putchar(s + 48);
		putchar(r + 48);
		putchar(44);
		putchar(32);
		r++;
		}
		s++;
	}
	putchar('\n');
	return (0);
}
