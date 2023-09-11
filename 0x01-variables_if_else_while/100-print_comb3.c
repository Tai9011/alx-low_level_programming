#include<stdio.h>
/**
 *
 *
 *
 */
int main(void)
{
	int s = 0;
	int r = 0;
	
	while ( s <= 9 && r <= 9 && s < r)
	{
		putchar(s + '0');
		putchar(r + '0');
		putchar(44);
		putchar(32);
		s++;
		r++;
	}
	putchar('\n');
	return (0);
}
